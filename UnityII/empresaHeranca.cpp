#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

class pessoa {
    string nome;
    string cpf;
protected:
    double salario;
public:
    pessoa(const string& n, const string& c, double s): nome (n), cpf (c), salario (s) {
        cout << "pessoa criada" << endl;
    }

    ~pessoa() {
        cout << "pessoa destruida" << endl;
    }

    string get_nome() {
        return nome;
    }

    void set_nome(string n) {
        nome = n;
    }

    string get_cpf() {
        return cpf;
    }

    void set_cpf(string c) {
        cpf = c;
    }

    double get_salario() {
        return salario;
    }

    void set_salario(double s) {
        salario = s;
    }

    void print_info() {
        cout << "Nome: " << nome << endl;
        cout << "Cpf: " << cpf << endl;
        cout << "Salario: " << salario << endl;
    }
};

class funcionario : public pessoa {
    int carga_horaria;
    string departamento;
public:
    funcionario(const string& n, const string& c, double s, int ch, const string& d):pessoa(n,c,s), carga_horaria (ch), departamento (d) {
        cout << "funcionario criado" << endl;
    }

    ~funcionario() {
        cout << "funcionario destruido" << endl;
    }

    int get_carga_horaria() {
        return carga_horaria;
    }

    void set_carga_horaria(int ca) {
        carga_horaria = ca;
    }

    string get_departamento() {
        return departamento;
    }

    void set_departamento(string d) {
        departamento = d;
    }

    double calcula_salario() {
        return salario *= 1.3;
    }

    void print_info() {
        cout << "Nome: " << get_nome() << endl;
        cout << "Cpf: " << get_cpf() << endl;
        cout << "Salario: " << get_salario() << endl;
        cout << "Carga horaria: " << carga_horaria << endl;
        cout << "Departamento: " << departamento << endl;
    }

};

class gerente : public pessoa {
    double bonus;
    string projeto;
public:
    gerente(const string& n, const string& c, double s, double b, const string& p) :pessoa(n,c,s), bonus(b), projeto (p) {
        cout << "gerente criado" << endl;
    }

    ~gerente() {
        cout << "gerente destruido" << endl;
    }

    double get_bonus() {
        return bonus;
    }

    void set_bonus(double b) {
        bonus = b;
    }

    string get_projeto() {
        return projeto;
    }

    void set_projeto(string p) {
        projeto = p;
    }

    void calcula_salario_bonus() {
       salario *= 2;
       salario += bonus;
    }

    void print_info(){
        cout << "nome: " << get_nome() << endl;
        cout << "cpf: " << get_cpf() << endl;
        cout << "salario: " << get_salario() << endl;
        cout<< "bonus: "<< bonus <<endl;
        cout<< "projeto: "<< projeto <<endl;
  }
};



int main(void) {
    funcionario f1("Filipe", "12094922490", 2000, 40, "dp1");
    f1.calcula_salario();
    f1.print_info();

    gerente g1("Rene", "46215930482", 3000, 500, "dp1");
    g1.calcula_salario_bonus();
    g1.print_info();


    return 0;
}