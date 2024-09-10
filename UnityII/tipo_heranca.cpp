#include <iostream>

using std::cout;
using std::endl;

class base {
	int valor;
public:
	base(int v):valor(v) { }
	int get_valor() { return valor; }
	void set_valor(int v) { valor = v; }
};

class derivada : protected base {
public:
	derivada(int v):base(v) { }
};

int main(void) {
	base b1(10);
	base* pb1;
	derivada d1(20);

	pb1 = &d1;

	cout << b1.get_valor() << endl;
//	cout << d1.get_valor() << endl;


}
