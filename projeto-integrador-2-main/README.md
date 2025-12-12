Projeto Integrador 2024/2: Monitoramento da Qualidade da Água 💧📊

Status: Concluído ✅

Instituição: Universidade Federal de Itajubá (UNIFEI)

Curso: Bacharelado em Ciência e Tecnologia

📝 Resumo do Projeto

Este repositório documenta o Projeto Integrador 2, focado na análise e ciência de dados aplicadas a um problema real: o monitoramento da qualidade da água.

Desenvolvemos um Dashboard Interativo completo que coleta, processa e visualiza indicadores de qualidade da água, permitindo uma análise rápida e intuitiva para tomada de decisão. O projeto integra banco de dados SQL com uma interface moderna em Python.

🚀 Tecnologias e Ferramentas

🛠 Principais Funcionalidades

O sistema foi desenvolvido para ser intuitivo e eficiente, contando com:

📊 Visualização de Dados

Dashboard Interativo: Painel de controle construído com Streamlit para visualização em tempo real.

Gráficos Dinâmicos: Uso da biblioteca Plotly para gráficos que permitem zoom, filtros e interação direta.

💾 Gestão de Dados

Banco de Dados MySQL: Estrutura robusta para armazenamento histórico das medições.

Integração Python + SQL: Scripts automatizados para conexão, consulta e inserção de dados.

📈 Análise

Indicadores de Qualidade: Monitoramento de parâmetros críticos da água.

Relatórios Visuais: Geração de insights visuais para facilitar a interpretação dos dados brutos.

📂 Estrutura do Repositório

📁 /db: Contém os scripts de banco de dados (schema.sql para criar e db.py para conexão).

📁 /static: Imagens e arquivos estáticos usados na interface.

📄 dashboard.py: O código principal que roda a aplicação web.

💻 Como Rodar o Projeto

Pré-requisitos: Ter Python e MySQL instalados.

Clone o repositório:

git clone [https://github.com/PriscilaTischer/projeto-integrador-2_monitoramento-da-agua_analise-de-dados.git](https://github.com/PriscilaTischer/projeto-integrador-2_monitoramento-da-agua_analise-de-dados.git)


Instale as dependências:

pip install streamlit pandas plotly pymysql


Configure o Banco de Dados:

Crie um banco no MySQL e importe o arquivo /db/schema.sql.

Execute o Dashboard:

python -m streamlit run dashboard.py


👥 Equipe e Colaboração

Este projeto foi desenvolvido com muita dedicação pela equipe:

Priscila Tischer de Zottis (GitHub | LinkedIn)

Simone

Fabrício

Pedro