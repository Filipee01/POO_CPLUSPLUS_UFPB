#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;



class pessoa {
int idade;
public:
  pessoa(int i): idade(i) {
    cout << "pessoa criada\n";
  };

  int get_idade() {
    return idade;
  }

  void set_idade(int i) {
    idade = i;
  }

  void print_info() {
    cout << "idade: " << idade << endl;
  }
};

class estudante : private pessoa { // pode omitir o private pois vem como default
public:
  estudante(int i): pessoa(i) {
    cout << "estudante criado\n";
  }

  void estudar() {
    cout << "estudar()\n";
    print_info();
    cout << "fim estudar()";
  }
};


int main(void) {
  // pessoa* pp1;
  // pp1 = &e1; erro estudante não é subtipo de pessoa
  estudante e1(20);
  // e1.print_info(); //erro metodo privado 
  e1.estudar();
  return 0;
}