#include "Modalidade.h"

using std::cout;
using std::string;
using std::endl;

// Construtor da classe Modalidade
Modalidade::Modalidade(const string& n, bool c)
    : nome(n), coletiva(c) {
    cout << "Modalidade " << nome << " criada." << endl;  // Mensagem ao criar um objeto Modalidade
}

// Destrutor da classe Modalidade
Modalidade::~Modalidade() {
    cout << "Modalidade " << nome << " destruida." << endl;  // Mensagem ao destruir um objeto Modalidade
}

// Método para obter o nome da modalidade
string Modalidade::getNome() const { return nome; }

// Método para verificar se a modalidade é coletiva
bool Modalidade::isColetiva() const { return coletiva; }

// Método para exibir as informações da modalidade
void Modalidade::exibirInformacoes() const {
    cout << "Modalidade: " << nome << ", Coletiva: " << (coletiva ? "Sim" : "Nao") << endl;
}
