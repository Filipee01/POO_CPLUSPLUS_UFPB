#include <iostream>

//metodo construtor vai ter q invocar o metodo construtor da base ascendente 

using std::cout;
using std::endl;
using std::string;

class animal {
  int idade;
public:
  animal(int i): idade(i) {
    cout << "animal(" << idade << ")" << endl;
  }
~animal() {
  cout << "animal(" << idade << ") destruido!" << endl;
}

  int get_idade() {
    return idade;
  }
  
  void set_idade(int i) {
    idade = i;
  }
  
  void print_info() {
    cout << "animal(" << idade << ")" << endl;
  }

};

class cachorro : public animal {
  string latido;

public: 
  cachorro(int i, const string& l) : animal(i), latido(l) { //invocar metodo construtor da classe ascendente : animal(i), latido(l)
    cout << "cachorro(" << get_idade() << endl;
    cout << ", " << latido << ")" << endl;
  }

~cachorro() {
  cout << "animal(" << get_idade() << ") destruido!" << endl;
  cout << ", " << latido << ")" << endl;
}

  string& get_latido() {
    return latido;
  }
  void set_latido(const string& l) {
    latido = l;
  }

void print_info() {
  cout << "cachorro(" << get_idade() << ", " << endl;
  cout << latido << ")" << endl;
}

};

int main(void) {
  cachorro c1(7, "AUAU");
  cachorro c2(9, "AWAW");

  cout << endl;
  animal* pa = &c1;

  pa -> set_idade(10);

  pa -> print_info();


  return 0;
}