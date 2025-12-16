#define DHTPIN 2        // Pino digital conectado ao sensor de temperatura e umidade
#define DHTTYPE DHT11   // Tipo do sensor de temperatura e umidade
#define PH_PIN A1      // Pino analógico para leitura do pH
// Constantes de calibração pH
float offset = -0.0;     // ajuste fino pH
float slope = -5.4;      // coeficiente da curva pH

// Libs e configuração do LCD I2C
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
// Endereço encontrado pelo Scanner
LiquidCrystal_I2C lcd(0x27, 20, 4);

// Configuração sensor de temperatura e umidade
#include <DHT.h>
DHT dht(DHTPIN, DHTTYPE);

int sensorBoia = 6;

// Configuração sensor de turbidez
int SensorTurbidez = A0;
float tensao, NTU;

// Pinos dos leds
const int ledBranco = 3;
const int ledLaranja = 4;
const int ledVermelho = 5;

void setup() {
    Serial.begin(9600);
    pinMode(sensorBoia, INPUT_PULLUP);

    // Setup sensor de temperatura e umidade
    dht.begin();

    // Setup leds
    pinMode(ledBranco, OUTPUT);
    pinMode(ledLaranja, OUTPUT);
    pinMode(ledVermelho, OUTPUT);

    // Setup LCD
    lcd.init();    
    lcd.backlight();
}


void loop() {
  Serial.flush();
    // ===== NÍVEL =====
    int estado = digitalRead(sensorBoia);
    String nivel = (estado == LOW) ? "OK" : "BAIXO";

    // ===== TEMPERATURA E UMIDADE =====
    float umidade = dht.readHumidity();
    float temperatura = dht.readTemperature();
    resolveLeds(temperatura);

    // ===== pH =====
    int leitura = analogRead(PH_PIN);
    float volts = leitura * (5.0 / 1023.0);
    float ph = slope * volts + 21.34 + offset;
    if (ph < 0) ph = 0;
    if (ph > 14) ph = 14;

    // Escreve pH no LCD
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Valor do pH: ");
    lcd.setCursor(0, 1);
    lcd.print(ph, 2);

    // ===== TURBIDEZ =====
    tensao = 0;
    int N = 200;
    for (int i = 0; i < N; i++) {
        tensao += (analogRead(SensorTurbidez) / 1023.0) * 5.0;
    }
    tensao /= N;
    tensao = ArredondarPara(tensao, 2);

    if (tensao < 2.5) {
        NTU = 3000;
    } else if (tensao > 4.2) {
        tensao = 4.2;
        NTU = 0;
    } else {
        NTU = -1120.4 * pow(tensao, 2) + 5742.3 * tensao - 4353.8;
    }
    if (NTU < 0) NTU = 0;

String dados = nivel + "," + 
                String(umidade, 1) + "," + 
                String(temperatura, 1) + "," + 
                String(ph, 2) + "," + 
                String(NTU, 0);
  
  Serial.println(dados);

Serial.flush();


delay(5000);

}

float ArredondarPara(float ValorEntrada, int CasaDecimal) {
    float multiplicador = pow(10.0f, CasaDecimal);
    return roundf(ValorEntrada * multiplicador) / multiplicador;
}

void resolveLeds(float temperatura) {
    if (temperatura < 28) {
        digitalWrite(ledBranco, HIGH);
        digitalWrite(ledLaranja, LOW);
        digitalWrite(ledVermelho, LOW);
    } else if (temperatura >= 28 && temperatura < 30) {
        digitalWrite(ledBranco, LOW);
        digitalWrite(ledLaranja, HIGH);
        digitalWrite(ledVermelho, LOW);
    } else if (temperatura >= 30) {
        digitalWrite(ledBranco, LOW);
        digitalWrite(ledLaranja, LOW);
        digitalWrite(ledVermelho, HIGH);
    }
}
