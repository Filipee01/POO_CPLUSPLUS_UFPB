#ifndef ATLETA_H
#define ATLETA_H

#include <iostream>
#include <memory>
#include <string>
#include "Pais.h"
#include "Modalidade.h"

class Atleta {
private:
    std::string nome;   // Nome do atleta
    std::shared_ptr<Pais> pais;  // Pais de origem do atleta
    std::shared_ptr<Modalidade> modalidade;  // Modalidade esportiva do atleta

public:
    // Construtor da classe Atleta
    Atleta(const std::string& nome, std::shared_ptr<Pais> pais, std::shared_ptr<Modalidade> modalidade);

    // Destrutor da classe Atleta
    ~Atleta();

    // Método para exibir as informações do atleta
    void exibirInformacoes() const;
};

#endif
