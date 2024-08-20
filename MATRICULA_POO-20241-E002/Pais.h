#ifndef PAIS_H
#define PAIS_H

#include <iostream>
#include <string>


std::cout;
std::string;
std::endl;


class Pais {
    string nome_Pais;
    string continente;

public:
    Pais(string p, string c): nome_Pais(p), continente(c){
        cout << "Pais criado";
    }

    string getNomePais() const {
        return nome_Pais;
    }

    void setNomePais(string& nomeNovo) {
        nome_Pais = nome;
    }

    string getContinente() const  {
        return continente;
    }

    void setContinente(string continenteNovo) {
        continente = continenteNovo;
    }

    void mostrarInfo() const {
        cout << "País: " << nome << ", Continente: " << continente << endl;
    }
    ~Pais() {
        cout << "País Destruído";
    }

};

#endif // PAIS_H
