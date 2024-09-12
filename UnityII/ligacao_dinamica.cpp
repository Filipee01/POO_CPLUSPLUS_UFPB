#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


class pessoa {
	string nome;
	int idade;
	string endereco;
public:
	pessoa(const string& n, int i,
		const string& e) : nome(n),
				   idade(i),
				   endereco(e) {}

	string get_nome() const { return nome; }
	void set_nome(const string& n) {
		nome = n;
	}

	int get_idade() const { return idade; }
	void set_idade(int i) { idade = i; }

	string get_endereco() { return endereco; }
	void set_endereco(const string& e) {
		endereco = e;
	}

	virtual void print_info() {
		cout << "pessoa: " << nome;
		cout << ", " << idade;
		cout << ", " << endereco;
		cout << endl;
	}
};

class estudante : public pessoa {
	double cra;
public:
	estudante(const string& n, int i,
		  const string& e, double c):
				pessoa(n,i,e),
				cra(c) {}

	double get_cra() { return cra; }
	void set_cra(double c) { cra = c; }

	void print_info() {
                cout << "estudante: " << cra;
                cout << endl;
                pessoa::print_info();
                cout << "------------" << endl;
	}
};

class professor : public pessoa {
	string categoria;
public:
	professor(const string& n, int i,
		  const string& e,
	          const string& c):pessoa(n,i,e),
				   categoria(c) {}

	string get_categoria() {
		return categoria;
	}

	void set_categoria(const string& c) {
		categoria = c;
	}

	void print_info() {
		cout << "professor: " << categoria;
		cout << endl;
		pessoa::print_info();
		cout << "------------" << endl;
	}
};

int main(void) {
	professor p1("Ana Silva", 39, "R. S/N, 33", "Titular");

	estudante e1("Joao Fernandes", 18, "R. X, 99", 8.5);
	estudante e2("Maria Ferreira", 19, "R. Y, 66", 9.0);
	estudante e3("Jose da Silva", 20, "R. Z, 44", 8.0);

	pessoa* turma[4];

	turma[0] = &p1;
	turma[1] = &e1;
	turma[2] = &e2;
	turma[3] = &e3;

	double soma_idade;
	for (int i = 0; i < 4; i++) {
		soma_idade += turma[i]->get_idade();
	}

	cout << "Media idades: " << soma_idade/4;
	cout << endl;

	int numero;

	cout << "Digite um numero (0-3): ";
	cin >> numero;

	turma[numero]->print_info();

	return 0;

}
