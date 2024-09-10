#include <iostream>

using std::cout;
using std::endl;

class veiculo {
protected:
	int velocidade;
public:
	veiculo(int v):velocidade(v) { }
	int get_velocidade() { return velocidade; }
	void set_velocidade(int v) { velocidade = v; }
};

class carro : protected veiculo {
public:
	carro(int v) : veiculo(v) { }
	void mostrar_velocidade() {
		cout << "Velocidade: " << velocidade << endl;
	}
};


int main(void) {
	carro meu_carro(60);
//	meu_carro.set_velocidade(50); ERRO! - metodo protected
	meu_carro.mostrar_velocidade();
//	veiculo* pv1 = &meu_carro;


	return 0;
}
