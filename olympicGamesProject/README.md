# Sistema de Controle de Resultados das Olimpíadas
Informações Gerais: 

Este projeto implementa um sistema de controle de resultados das Olimpíadas em C++, seguindo os requisitos específicos para o gerenciamento de informações sobre atletas, modalidades esportivas, medalhas conquistadas e os países representados.

Estrutura do Projeto
O projeto está organizado da seguinte forma:


20230102493_POO-20241-E002/
│
├── include/
│   ├── Atleta.h -> Header para Atleta.
│   ├── Medalha.h -> Header para Medalha.
│   ├── Modalidade.h -> Header para Modalidade.
│   └── Pais.h -> Header para Pais.
│
|-- output/
|   |-- modalidade.exe -> saída do programa
|
├── src/
│   ├── Atleta.cpp -> Implementação dos métodos da classe Atleta.
│   ├── main.cpp ->  Implementação dos métodos da classe main, aqui vai ser onde vai ficar a manipulação e criação dos objetos
│   ├── Medalha.cpp -> Implementação dos métodos da classe Medalha.
│   ├── Modalidade.cpp ->  Implementação dos métodos da classe Modalidade. 
│   └── Pais.cpp -> Implementação dos métodos da classe Pais. 
|
│─ Makefile
|- projeto.exe
└─ README.md



# Como Compilar e Executar

Compilação: Para compilar o projeto, use o comando abaixo:

g++ -o projeto src/main.cpp src/Atleta.cpp src/Modalidade.cpp src/Medalha.cpp src/Pais.cpp -Iinclude

Execução: Após compilar, execute o projeto com o seguinte comando:
./projeto

Usando o Makefile: você pode usar o Makefile para compilar o projeto. Basta executar:

make

Limpeza dos arquivos gerados: Para limpar os arquivos compilados, execute:
make clean

# Funcionalidades do projeto
O programa permite o cadastro e exibição de atletas, modalidades, países e medalhas. Você pode:

Cadastrar novos países.
Cadastrar novas modalidades esportivas.
Cadastrar novos atletas vinculados a países e modalidades.
Cadastrar novas medalhas, associando atletas e modalidades.
Exibir os resultados das Olimpíadas.

Menu de Opções
O programa oferece o seguinte menu de opções:

Cadastrar País
Cadastrar Modalidade
Cadastrar Atleta
Cadastrar Medalha
Exibir Resultados
Sair

# Observação

O sistema armazena os dados usando fazendop o uso de ponteiros inteligentes (std::shared_ptr) para o gerenciamento de recursos de memória de forma segura e eficiente.

Mensagens de criação e destruição dos objetos são exibidas via cout.

# Comentários e Estrutura
Fiz comentários no código para facilitar o entendimento, destacando as implementações de encapsulamento, composição, agregação, além do uso de métodos construtores e destrutores.


# Resultado Esperado
Ao executar o programa, as mensagens de criação e destruição dos objetos serão exibidas, mostrando a gestão de memória e a ordem de execução dos destrutores.

exemplo de saida esperada:


Menu:
1. Cadastrar Pais
2. Cadastrar Modalidade
3. Cadastrar Atleta
4. Cadastrar Medalha
5. Exibir Resultados
0. Sair
Escolha uma opcao: 1
Digite o nome do pais: Estados Unidos
Digite o continente: América do Norte
Pais Estados Unidos criado!

Menu:
1. Cadastrar Pais
2. Cadastrar Modalidade
3. Cadastrar Atleta
4. Cadastrar Medalha
5. Exibir Resultados
0. Sair
Escolha uma opcao: 2
Digite o nome da modalidade: Basquete
Eh uma modalidade coletiva? (1-Sim, 0-Nao): 1
Modalidade Basquete criada!

Menu:
1. Cadastrar Pais
2. Cadastrar Modalidade
3. Cadastrar Atleta
4. Cadastrar Medalha
5. Exibir Resultados
0. Sair
Escolha uma opcao: 3
Digite o nome do atleta: LeBron James
Escolha o pais do atleta (indice):
0. Estados Unidos
0
Escolha a modalidade do atleta (indice):
0. Basquete
0
Atleta LeBron James criado!

Menu:
1. Cadastrar Pais
2. Cadastrar Modalidade
3. Cadastrar Atleta
4. Cadastrar Medalha
5. Exibir Resultados
0. Sair
Escolha uma opcao: 4
Digite o tipo da medalha (ouro, prata, bronze): ouro
Digite o ano da conquista: 2024
Escolha o atleta que ganhou a medalha (indice):
0. Atleta: LeBron James
Pais: Estados Unidos
Modalidade: Basquete
0
Escolha a modalidade (indice):
0. Basquete
0
Medalha de ouro criada!

Menu:
1. Cadastrar Pais
2. Cadastrar Modalidade
3. Cadastrar Atleta
4. Cadastrar Medalha
5. Exibir Resultados
0. Sair
Escolha uma opcao: 5

-------Resultados das Olimpiadas-------
Medalha: ouro, Ano: 2024
Atleta: LeBron James
Pais: Estados Unidos
Continente: América do Norte
Modalidade: Basquete, Coletiva: Sim

Menu:
1. Cadastrar Pais
2. Cadastrar Modalidade
3. Cadastrar Atleta
4. Cadastrar Medalha
5. Exibir Resultados
0. Sair
Escolha uma opcao: 0
Atleta LeBron James destruído!
Pais Estados Unidos destruído!
Modalidade Basquete destruída!
Medalha de ouro destruída!
Fim do programa.

