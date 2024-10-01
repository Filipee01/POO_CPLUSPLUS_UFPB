// //sobrecarga de operadores

// #include <iostream>
// #include <string>

// using std::cout;
// using std::string;
// using std::endl;

// class retangulo {
//   int base;
//   int altura;
// public:
//   retangulo(int b, int a) : base(b), altura(a) {}

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
// };
// int main() {
//   retangulo r1(10,2);
//   retangulo r2(5,10);

//   retangulo r3 = r1 + r2;
//   retangulo r4 = r1 - r2;

//   r3.print_info();
//   r4.print_info();


//   return 0;
// }


