#include "Atleta.h"

using std::cout;
using std::string;
using std::endl;

// Construtor da classe Atleta
Atleta::Atleta(const string& nome, std::shared_ptr<Pais> pais, std::shared_ptr<Modalidade> modalidade)
    : nome(nome), pais(pais), modalidade(modalidade) {
    cout << "Atleta " << nome << " criado." << endl;  // Mensagem ao criar um objeto Atleta
}

// Destrutor da classe Atleta
Atleta::~Atleta() {
    cout << "Atleta " << nome << " destruido." << endl;  // Mensagem ao destruir um objeto Atleta
}

// Metodo para exibir as informacoes do atleta
void Atleta::exibirInformacoes() const {
    cout << "Atleta: " << nome << endl;
    pais->exibirInformacoes();          // Exibir informa��es do pa�s do atleta
    modalidade->exibirInformacoes();    // Exibir informa��es da modalidade do atleta
}
