#ifndef MODALIDADE_H
#define MODALIDADE_H

#include <iostream>
#include <string>


std::cout;
std::string;
std::endl;


class Modalidade {
    string nome_Modalidade_Esp;
    bool individual;

public:
    Modalidade(string m, bool i): nome_Modalidade_Esp(m), individual(i){
        cout << "Modalidade criada";
    }

    string getNomeModalidade() const {
        return nome_Modalidade_Esp;
    }

    void setNomeModalidade(string novaModalidade) {
        nome_Modalidade_Esp = novaModalidade;
    }

    bool ehIndividual() const  {
        return individual;
    }

    void setIndividual(bool novoIndividual) {
        individual = novoIndividual;
    }

    void mostrarInfo() const {
        cout << "Modalidade: " << novaModalidade << "(" << novoIndividual ? " Individual : "Coletivo" )<< ")" << endl;
    }
    ~Pais() {
        cout << "País Destruído";
    }

};

#endif // PAIS_H


#endif // MODALIDADE_H
