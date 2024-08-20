#include "Pais.h"

using std::cout;
using std::string;
using std::endl;

// Construtor da classe Pais
Pais::Pais(const string& n, const string& c)
    : nome(n), continente(c) {
    cout << "Pais " << nome << " criado." << endl;  // Mensagem ao criar um objeto Pais
}

// Destrutor da classe Pais
Pais::~Pais() {
    cout << "Pais " << nome << " destruido." << endl;  // Mensagem ao destruir um objeto Pais
}

// Método para obter o nome do país
string Pais::getNome() const { return nome; }

// Método para obter o continente do país
string Pais::getContinente() const { return continente; }

// Método para exibir as informações do país
void Pais::exibirInformacoes() const {
    cout << "Pais: " << nome << ", Continente: " << continente << endl;
}
