# 💧 Projeto Integrador 2024/2 – Monitoramento da Qualidade da Água 📊

## 📌 Status
✅ Concluído

## 🎓 Instituição
Universidade Federal de Itajubá (UNIFEI)

## 📚 Curso
Bacharelado em Ciência e Tecnologia

---

## 📝 Resumo do Projeto
Este repositório documenta o **Projeto Integrador 2**, focado na análise e ciência de dados aplicados a um problema real: o monitoramento da qualidade da água.

Foi desenvolvido um **Dashboard Interativo** que coleta, processa e visualiza indicadores de qualidade da água, permitindo uma análise rápida e intuitiva para apoio à tomada de decisão. O projeto integra um banco de dados SQL com uma interface moderna desenvolvida em Python.

---

## 🚀 Tecnologias e Ferramentas
- Python
- Streamlit
- Plotly
- MySQL
- SQL
- Git e GitHub

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

```bash
pip install streamlit pandas plotly pymysql
### Configuração do Banco de Dados
- Criar um banco de dados no MySQL
- Importar o arquivo `/db/schema.sql`

### Execução do Dashboard
Para iniciar o dashboard interativo, execute o comando:

```bash
python -m streamlit run dashboard.py
👥 Equipe e Colaboração

Este projeto foi desenvolvido em grupo por:

Priscila Tischer de Zottis (GitHub | LinkedIn)
Simone
Fabrício
Pedro
