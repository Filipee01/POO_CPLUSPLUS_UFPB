#include "Pais.h"           // Inclui a definição da classe Pais
#include "Modalidade.h"     // Inclui a definição da classe Modalidade
#include "Atleta.h"         // Inclui a definição da classe Atleta
#include "Medalha.h"        // Inclui a definição da classe Medalha

using std::cout;            // Usa cout para exibir saídas
using std::cin;             // Usa cin para entrada de dados
using std::string;          // Usa string para trabalhar com cadeias de caracteres
using std::endl;            // Usa endl para criar novas linhas

// Definição de constantes para os limites de cada tipo de objeto
const int MAX_ATLETAS = 10;
const int MAX_MODALIDADES = 5;
const int MAX_PAISES = 5;
const int MAX_MEDALHAS = 10;

int main() {
    // Arrays para armazenar shared_ptrs de objetos
    std::shared_ptr<Pais> paises[MAX_PAISES];
    std::shared_ptr<Modalidade> modalidades[MAX_MODALIDADES];
    std::shared_ptr<Atleta> atletas[MAX_ATLETAS];
    std::shared_ptr<Medalha> medalhas[MAX_MEDALHAS];

    // Contadores de objetos criados
    int numPaises = 0, numModalidades = 0, numAtletas = 0, numMedalhas = 0;

    int opcao;  // Variável para armazenar a escolha do usuário
    do {
        // Menu de opções
        cout << "\nMenu:\n";
        cout << "1. Cadastrar Pais\n";
        cout << "2. Cadastrar Modalidade\n";
        cout << "3. Cadastrar Atleta\n";
        cout << "4. Cadastrar Medalha\n";
        cout << "5. Exibir Resultados\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;  // Lê a escolha do usuário

        // Cadastrar país
        if (opcao == 1 && numPaises < MAX_PAISES) {
            string nome, continente;
            cout << "Digite o nome do pais: ";
            cin.ignore(); // Limpa o buffer de entrada
            std::getline(cin, nome); // Usa getline para capturar o nome completo
            cout << "Digite o continente: ";
            std::getline(cin, continente); // Captura o continente

            // Armazena o novo objeto Pais
            paises[numPaises++] = std::make_shared<Pais>(nome, continente);  
        }
        // Cadastrar modalidade
        else if (opcao == 2 && numModalidades < MAX_MODALIDADES) {
            string nome;
            bool coletiva;
            cout << "Digite o nome da modalidade: ";
            cin.ignore(); // Limpa o buffer de entrada
            std::getline(cin, nome); // Usa getline para capturar o nome completo
            cout << "Eh uma modalidade coletiva? (1-Sim, 0-Nao): ";
            cin >> coletiva;  // Lê se é coletiva ou não

            // Cria e armazena o objeto Modalidade
            modalidades[numModalidades++] = std::make_shared<Modalidade>(nome, coletiva);  
        }
        // Cadastrar atleta
        else if (opcao == 3 && numAtletas < MAX_ATLETAS) {
            string nome;
            int paisIndex, modalidadeIndex;
            cout << "Digite o nome do atleta: ";
            cin.ignore(); // Limpa o buffer de entrada
            std::getline(cin, nome); // Captura o nome completo do atleta

            // Exibe os países disponíveis
            cout << "Escolha o pais do atleta (indice): \n";
            for (int i = 0; i < numPaises; i++) {
                cout << i << ". " << paises[i]->getNome() << endl;
            }
            cin >> paisIndex;  // Lê o índice do país escolhido

            // Verifica se o índice é válido
            if (paisIndex < 0 || paisIndex >= numPaises) {
                cout << "Indice invalido. Tente novamente.\n";
                continue;
            }

            // Exibe as modalidades disponíveis
            cout << "Escolha a modalidade do atleta (indice): \n";
            for (int i = 0; i < numModalidades; i++) {
                cout << i << ". " << modalidades[i]->getNome() << endl;
            }
            cin >> modalidadeIndex;  // Lê o índice da modalidade escolhida

            // Verifica se o índice é válido
            if (modalidadeIndex < 0 || modalidadeIndex >= numModalidades) {
                cout << "Índice inválido. Tente novamente.\n";
                continue;
            }

            // Cria e armazena o objeto Atleta com as referências corretas
            atletas[numAtletas++] = std::make_shared<Atleta>(nome, paises[paisIndex], modalidades[modalidadeIndex]);  
        }
        // Cadastrar medalha
        else if (opcao == 4 && numMedalhas < MAX_MEDALHAS) {
            string tipo;
            int ano, atletaIndex, modalidadeIndex;
            cout << "Digite o tipo da medalha (ouro, prata, bronze): ";
            cin.ignore(); // Limpa o buffer de entrada
            std::getline(cin, tipo); // Captura o tipo da medalha
            cout << "Digite o ano da conquista: ";
            cin >> ano;  // Lê o ano da conquista

            // Exibe os atletas disponíveis
            cout << "Escolha o atleta que ganhou a medalha (indice): \n";
            for (int i = 0; i < numAtletas; i++) {
                cout << i << ". ";
                atletas[i]->exibirInformacoes();  // Exibe informações do atleta
            }
            cin >> atletaIndex;  // Lê o índice do atleta escolhido

            // Verifica se o índice é válido
            if (atletaIndex < 0 || atletaIndex >= numAtletas) {
                cout << "Indice invalido. Tente novamente.\n";
                continue;
            }

            // Exibe as modalidades disponíveis
            cout << "Escolha a modalidade (indice): \n";
            for (int i = 0; i < numModalidades; i++) {
                cout << i << ". " << modalidades[i]->getNome() << endl;
            }
            cin >> modalidadeIndex;  // Lê o índice da modalidade escolhida

            // Verifica se o índice é válido
            if (modalidadeIndex < 0 || modalidadeIndex >= numModalidades) {
                cout << "Indice invalido. Tente novamente.\n";
                continue;
            }

            // Cria e armazena o objeto Medalha
            medalhas[numMedalhas++] = std::make_shared<Medalha>(tipo, ano, atletas[atletaIndex], modalidades[modalidadeIndex]);  
        }
        // Exibir resultados
        else if (opcao == 5) {
            cout << "\n-------Resultados das Olimpiadas------- \n";
            for (int i = 0; i < numMedalhas; i++) {
                medalhas[i]->exibirInformacoes();  // Exibe informações de cada medalha
            }
        }
        // Caso a opção seja inválida ou exceda os limites, exibe mensagem de erro
        else if (opcao < 0 || opcao > 5 || (opcao == 1 && numPaises >= MAX_PAISES) ||
                 (opcao == 2 && numModalidades >= MAX_MODALIDADES) ||
                 (opcao == 3 && numAtletas >= MAX_ATLETAS) ||
                 (opcao == 4 && numMedalhas >= MAX_MEDALHAS)) {
            cout << "Opcao invalida ou limite atingido. Tente novamente.\n";
        }

    } while (opcao != 0);  // Repetir até o usuário escolher sair

    return 0;  
}
