#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;



class veiculo {
protected:
  int velocidade;
public:
  veiculo(int v): velocidade(v) {
    cout << "velocidade criada\n";
  }

  int get_velocidade() {
    return velocidade;
  }

  void set_velocidade(int v) {
    velocidade = v;
  }
};

class carro : protected veiculo {
public:
  carro(int v): veiculo(v) {
    cout << "carro criado\n";
  }

  void mostrar_velocidade() {
    cout << "Velocidade: " << velocidade << endl;
  }
};


int main(void) {
  carro c1(100);
  // c1.set_velocidade(200); // erro metodo protected
  c1.mostrar_velocidade();
  // veiculo* pv1 = &c1; // erro metodo protected
  


  return 0;
}