#include "Medalha.h"

using std::cout;
using std::string;
using std::endl;

// Construtor da classe Medalha
Medalha::Medalha(const string& t, int a, std::shared_ptr<Atleta> atleta, std::shared_ptr<Modalidade> modalidade)
    : tipo(t), ano(a), atleta(atleta), modalidade(modalidade) {
    cout << "Medalha de " << tipo << " criada." << endl;  // Mensagem ao criar um objeto Medalha
}

// Destrutor da classe Medalha
Medalha::~Medalha() {
    cout << "Medalha de " << tipo << " destruida." << endl;  // Mensagem ao destruir um objeto Medalha
}

// Método para exibir as informações da medalha
void Medalha::exibirInformacoes() const {
    cout << "Medalha: " << tipo << ", Ano: " << ano << endl;
    atleta->exibirInformacoes();  // Exibir informações do atleta que conquistou a medalha
}
