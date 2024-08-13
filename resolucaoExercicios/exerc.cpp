/* 
classe: estão para os tipos assim como os objetos estão para as variaveis
vai estabelecer quais sao os atributos e metodos para um objeto
 - objetos -> conta(1080)
              corrente

*/

// classe objeto e saber usar como codigo em c++

class conta {
  int numero;
  char tipo;
  double saldo;
public: 
  int depositar(double valor);
  int sacar(double valor);
};

class transacao {
  double valor;
  conta* origem;    //poderia colocar shared pointer tbm
  conta* destino;
public:
  int executado();
  transacao(double v, conta* o, conta* d);
  ~transacao();
};

int main(void) {
  conta c1(1015,'p', 1010);
  conta c2(1012, 'p', 3020);
  transacao()
}

// associacao: quando uma classe tem uma outra classe como atributo
// agregacao/composicao: quando uma classe tem uma outra classe como atributo


//colocar um cod em c++ e dizer se é uma composicao ou agregação e explicar 

//composicao --> uniq pointer é um exemplo

//new tem q finalizar com o operador dele 