# 💧 Projeto Integrador 2025/2 – Monitoramento da Qualidade da Água 📊

## 📌 Status✅ Concluído

## 🎓 Instituição: Universidade Federal de Itajubá (UNIFEI)

## 📚 Curso: Bacharelado em Ciência e Tecnologia

---

## 📝 Resumo do Projeto
Este repositório documenta o **Projeto Integrador 2**, focado na análise e ciência de dados aplicados a um problema real: o monitoramento da qualidade da água.

Foi desenvolvido um **Dashboard Interativo** que coleta, processa e visualiza indicadores de qualidade da água, permitindo uma análise rápida e intuitiva para apoio à tomada de decisão. O projeto integra um banco de dados SQL com uma interface moderna desenvolvida em Python.

---

## 🚀 Tecnologias e Ferramentas

![Python](https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white)
![Streamlit](https://img.shields.io/badge/Streamlit-FF4B4B?style=for-the-badge&logo=streamlit&logoColor=white)
![Plotly](https://img.shields.io/badge/Plotly-3F4F75?style=for-the-badge&logo=plotly&logoColor=white)
![MySQL](https://img.shields.io/badge/MySQL-4479A1?style=for-the-badge&logo=mysql&logoColor=white)
![SQL](https://img.shields.io/badge/SQL-003B57?style=for-the-badge&logo=databricks&logoColor=white)
![Git](https://img.shields.io/badge/Git-F05032?style=for-the-badge&logo=git&logoColor=white)


---

## 🛠️ Principais Funcionalidades

### 📊 Visualização de Dados
- Dashboard interativo para visualização dos dados de qualidade da água
- Gráficos dinâmicos e interativos utilizando Plotly

### 💾 Gestão de Dados
- Banco de dados MySQL para armazenamento histórico
- Integração entre Python e SQL para inserção e consulta de dados

### 📈 Análise
- Monitoramento de indicadores críticos da qualidade da água
- Apoio à tomada de decisão por meio de relatórios visuais

---

## 📂 Estrutura do Repositório
- `/db` – Scripts de banco de dados (criação e conexão)
- `/static` – Imagens e arquivos estáticos utilizados na interface
- `dashboard.py` – Código principal da aplicação

---

## 💻 Como Executar o Projeto

### Pré-requisitos
- Python instalado
- MySQL instalado

### Instalação das Dependências
Instalar as bibliotecas necessárias para execução do projeto:

### bash
pip install streamlit pandas plotly pymysql
### Configuração do Banco de Dados
- Criar um banco de dados no MySQL
- Importar o arquivo `/db/schema.sql`

### Execução do Dashboard
Para iniciar o dashboard interativo, execute o comando:


python -m streamlit run dashboard.py

👥 Equipe e Colaboração
Este projeto foi desenvolvido em grupo por:

Priscila Tischer de Zottis  ([GitHub](https://github.com/PriscilaTischer) | [LinkedIn](https://www.linkedin.com/in/priscila-tischer/))
Simone
Fabrício
Pedro
