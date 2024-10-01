// //sobrecarga de operadores

// #include <iostream>
// #include <string>

// using std::cout;
// using std::string;
// using std::endl;
// using std::ostream;
// using std::istream;
// using std::cin;

// class retangulo {
//   int base;
//   int altura;
// public:
//   retangulo(int b = 0, int a = 0) : base(b), altura(a) {}

// void print_info() {
//   cout << "retangulo(" << base << "," << altura << ")" << endl;
//   }

// //sobrecarga de operadores

//   retangulo operator+(const retangulo& outro) {
//     return retangulo(base + outro.base, altura + outro.altura);
//   }

//   friend retangulo operator-(const retangulo& a, const retangulo& b) { //friend dois parametros
//     return retangulo(a.base - b.base, a.altura - b.altura);
//   }

//   retangulo operator-(const retangulo& outro) {
//     return retangulo(base - outro.base, altura - outro.altura);
//   }

//   friend ostream& operator<<(ostream& out, const retangulo& r) {
//     out << "retangulo(" << r.base << "," << r.altura << ") " << endl;
//     return out;
//   }

//   friend istream& operator>>(istream& in, retangulo& r) {
//     in >> r.base >> r.altura;
//     return in;
//   }
// };
// int main() {
//   retangulo r1(10,2);
//   retangulo r2(5,10);

//   retangulo r6(8,14);
  
//   retangulo r7;

//   cout << "r6: " << r6 << endl;
//   cout << "Digite dois numeros reais: " << endl;
//   cin >> r7;
//   cout << "r7: " << r7 << endl;
//   retangulo r3 = r1 + r2;
//   retangulo r4 = r1 - r2;

//   r3.print_info();
//   r4.print_info();


//   return 0;
// }


