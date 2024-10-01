// //sobrecarga de operadores relacionais

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

// //sobrecarga de operadores relacionais

//   retangulo operator+(const retangulo& outro) {
//     return retangulo(base + outro.base, altura + outro.altura);
//   }

//   friend retangulo operator-(const retangulo& a, const retangulo& b) { //friend dois parametros
//     return retangulo(a.base - b.base, a.altura - b.altura);
//   }

//   retangulo operator-(const retangulo& outro) {
//     return retangulo(base - outro.base, altura - outro.altura);
//   }

// //retorna true ou false bool

//   bool operator==(const retangulo& outro) {
//     return base == outro.base && altura == outro.altura;
//   }

//   bool operator>(const retangulo& outro) {
//   return (base * altura) > (outro.base*outro.altura);
// }

//   friend bool operator <(const retangulo& a, const retangulo& b) {
//   return (a.base*a.altura) < (b.base*b.altura);
// }

// };
// int main() {
//   retangulo r1(10,2);
//   retangulo r2(5,10);

//   retangulo r3 = r1 + r2;
//   retangulo r4 = r1 - r2;

//   retangulo r5(10,20);

//   r1.print_info();
//   r2.print_info();
//   cout << "____" << endl;
//   r3.print_info();
//   r4.print_info();
//   r5.print_info();
//   cout << "____" << endl;

//   if(r1 > r2) {
//     cout <<"r1 > r2" << endl;
//   }else {
//     cout <<"r2 >= r1" << endl;
//   }

//   if(r1 == r5) {
//     cout <<"r1 == r5" << endl;
//   }else {
//     cout <<"r1 != r5" << endl;
//   }

//   if(r4 < r2) {
//     cout << "r4 < r2" << endl;
//   }else {
//     cout << "r1 != r5" << endl;
//   }

//   return 0;
// }