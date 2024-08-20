#ifndef MODALIDADE_H
#define MODALIDADE_H

#include <iostream>
#include <string>

class Modalidade {
private:
    std::string nome; // Nome da modalidade esportiva
    bool coletiva;  // Define se a modalidade eh coletiva (true) ou individual (false)

public:
    // Construtor da classe Modalidade
    Modalidade(const std::string& n, bool c);

    // Destrutor da classe Modalidade
    ~Modalidade();

    // Método para obter o nome da modalidade
    std::string getNome() const;

    // Método para verificar se a modalidade � coletiva
    bool isColetiva() const;

    // Método para exibir as informacoes da modalidade
    void exibirInformacoes() const;
};

#endif
