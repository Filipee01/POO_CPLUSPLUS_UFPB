#ifndef PAIS_H
#define PAIS_H

#include <iostream>
#include <memory>
#include <string>

class Pais {
private:
    std::string nome;  // Nome do país
    std::string continente;  // Continente ao qual o país pertence

public:
    // Construtor da classe Pais
    Pais(const std::string& n, const std::string& c);

    // Destrutor da classe Pais
    ~Pais();

    // Método para obter o nome do país
    std::string getNome() const;

    // Método para obter o continente do país
    std::string getContinente() const;

    // Método para exibir as informações do país
    void exibirInformacoes() const;
};

#endif
