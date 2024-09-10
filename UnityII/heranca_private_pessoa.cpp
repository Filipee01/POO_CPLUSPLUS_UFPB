#include <iostream>

using std::cout;
using std::endl;

class pessoa {
	int idade;
public:
	pessoa(int i):idade(i) { }
	int get_idade() { return idade; }
	void set_idade(int i) { idade = i; }
	void print_info() {
		cout << "Idade: " << idade << endl;
	}
};

class estudante : pessoa {
public:
	estudante(int i) : pessoa(i) { }
	void estudar() {
		cout << "estudar()" << endl;
		print_info();
		cout << "fim estudar()" << endl;
	}
};

int main(void) {
	pessoa* pp1;
	estudante e1(20);
//	pp1 = &e1; - ERRO: estudante nao é subtipo de pessoa
//	e1.print_info(); - ERRO: metodo privado
	e1.estudar();

}
