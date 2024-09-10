#include <iostream>

using std::string;
using std::cout;
using std::endl;

class pessoa {
	string nome;
	string cpf;
protected:
	double salario;
public:
	pessoa(const string& n, const string& c,
		double s):nome(n), cpf(c), salario(s) {

	}

	string get_nome() const {
		return nome;
	}

	void set_nome(const string& n) {
		nome = n;
	}

	string get_cpf() const {
		return cpf;
	}

	void set_cpf(const string& c) {
		cpf = c;
	}

	double get_salario() const {
		return salario;
	}
};

class funcionario : public pessoa {
	int carga_horaria;
	string departamento;
public:
	funcionario(const string& n, const string& c,
		    double s, int ch, const string& d):
					pessoa(n, c, s),
					carga_horaria(ch),
					departamento(d) {
	}

	int get_carga_horaria() const {
		return carga_horaria;
	}

	void set_carga_horaria(int ch) {
		carga_horaria = ch;
	}

	string get_departamento() const {
		return departamento;
	}

	void set_departamento(const string& d) {
		departamento = d;
	}

	void modifica_salario() {
		salario *= 1.3;
	}
};

class gerente : public pessoa {
	string projeto;
	double bonus;
public:
	gerente(const string& n, const string& c,
		double s, const string& p, double b):
					pessoa(n,c,s),
					projeto(p),
					bonus(b) {

	}

	string get_projeto() const {
		return projeto;
	}

	void set_projeto(const string& p) {
		projeto = p;
	}

	double get_bonus() const {
		return bonus;
	}

	void set_bonus(double b) {
		bonus = b;
	}

	void modifica_salario() {
		salario *= 1.5;
		salario += bonus;
	}
};


int main(void) {
	funcionario fun1("Joao da Silva", "1234", 2000,
			 40, "Dep. Aleatorio");

	gerente ger1("Ana Fernandes", "5678", 4000,
			"Projeto X", 1000);


	cout << "fun1.salario = " << fun1.get_salario();
	cout << endl;

	cout << "ger1.salario = " << ger1.get_salario();
	cout << endl;

	fun1.modifica_salario();
	ger1.modifica_salario();

        cout << "fun1.salario = " << fun1.get_salario();
        cout << endl;

        cout << "ger1.salario = " << ger1.get_salario();
        cout << endl;

        fun1.modifica_salario();
        ger1.modifica_salario();

        cout << "fun1.salario = " << fun1.get_salario();
        cout << endl;

        cout << "ger1.salario = " << ger1.get_salario();
        cout << endl;


}
