#ifndef MEDALHA_H
#define MEDALHA_H

#include <iostream>
#include <memory>
#include <string>
#include "Atleta.h"
#include "Modalidade.h"

class Medalha {
    std::string tipo;   // Tipo da medalha (ouro, prata ou bronze)
    int ano;   // Ano da conquista da medalha
    std::shared_ptr<Atleta> atleta; // Atleta que conquistou a medalha
    std::shared_ptr<Modalidade> modalidade; // Modalidade na qual a medalha foi conquistada

public:
    // Construtor da classe Medalha
    Medalha(const std::string& t, int a, std::shared_ptr<Atleta> atleta, std::shared_ptr<Modalidade> modalidade);

    // Destrutor da classe Medalha
    ~Medalha();

    // Metodo para exibir as informa��es da medalha
    void exibirInformacoes() const;
};

#endif
