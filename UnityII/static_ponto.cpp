#include <iostream>
#include <string>


using std::cout;
using std::string;
using std::endl;


class ponto {
  double x ;
  double y;
  static int contador;
public:
  ponto(double xx, double yy): x(xx), y(yy) {
    contador++;
  }
  ~ponto() {
    contador--;
  }

  static int get_contador() {
    return contador;
  }


  void print_info() {
    cout << "ponto(" << x << ","; cout << "ponto(" << y << ")" << endl;
    // cout << "Existem " << contador << " pontos" << endl;
  }
};

int ponto::contador = 0;

int main() {
  ponto p1(0.5,1.3);
  p1.print_info(); //na hora q invoca o print info so tinha invocado o construtor 1 vez 
  ponto p2(3.4,1.3);
  p2.print_info(); // aqui já existem 2 

  cout << "Existem " << ponto::get_contador() << " pontos" << endl;


  return 0;
}