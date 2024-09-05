#include <iostream>
#include<string>

using std::cout;
using std::string;
using std::endl;

class Conta {
protected:
  double saldo;

public:
  Conta(double s): saldo (s){}

  void altera_saldo_mes(){
  
  }

  void sacar(double valor){
    saldo -= valor;
  }

  void depositar(double valor){
    saldo += valor;
  }
};

class Conta_corrente : public Conta {
  double limite;
  double valor_manutencao;
public:
  Conta_corrente(double s, double l, double vm):Conta(s),limite(l), valor_manutencao(vm){}

  void altera_saldo_mes(){
    saldo -= valor_manutencao;
  }

  void sacar(double valor) {
    if(valor <= (saldo + limite))
      saldo -= valor;
  }else {
    cout << "saldo insuficiente" << endl;
  }
};
  }
};



class Conta_poupanca : public Conta {

};


int main() {
  Conta_corrente cc1(1000, 200, 20);
  Conta_poupanca cp1(500, .01);

  conta* pc1;
  conta* pc2;

  pc1 = &cc1;
  pc2 = &cp1;

  
  cp1.altera_saldo_mes();
  cc1.altera_saldo_mes();

  pc1 -> print_info();
  pc2 -> print_info();
  
  // cp1.print_info();
  // cc1.print_info();
  
  return 0;
}