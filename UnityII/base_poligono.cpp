#include <iostream>
#include <string>

#define PI 3.14

using std::cout;
using std::string;
using std::endl;


class poligono {
protected:
  string cor;
public:
  // poligono(string c): cor(c){
  //   cout << "Poligono criado!" << endl;
  // } poderia fazer o construtor e chamar ele em circulo


  string get_cor(){
    return cor;
  }
  void set_cor(const string& c) {
    cor = c;
  }

  virtual double get_area() const {
    return 0;
  }  // devo procurar se a classe possui uma subclasse e o objeto q eu estou pontando é uma subclasse // ponteiros para classe ascendente, o resultado fica igual 
};

class circulo : public poligono {
    double raio;
public:
  circulo(const string& c, double r):raio(r) {
    cout << "Circulo criado!" << endl;
    cor = c;
  }

  double get_area() const {
    return PI * (raio * raio);
  }

  double get_raio(){
    return raio;
  }

  void set_raio(double r){
    raio = r;
  }
};

class retangulo : public poligono {
  double base;
  double altura;
public:
  retangulo(const string& c, double b, double a):base(b), altura(a) {
    cout << "Retangulo criado!" << endl;
    cor = c;
  }

  double get_base(){
    return base;
  }

  void set_base(double b){
    base = b;
  }

  double get_altura() {
    return altura;
  }

  void set_altura(double a){
    altura = a;
  }

  double get_area() const {
    return base * altura;
  }
};

class triangulo : public poligono {
  double base;
  double altura;
public:
  triangulo(const string& c, double b, double a): base(b), altura(a) {
    cout << "triangulo criado!" << endl;
    cor = c;
  }

  double get_base(){
    return base;
  }

  void set_base(double b){
    base = b;
  }

  double get_altura() {
    return altura;
  }

  void set_altura(double a){
    altura = a;
  }

  double get_area() const{
    return (base * altura) / 2;
  }

  
};

class trapezio : public poligono {
  double base_maior;
  double base_menor;
  double altura;

public:
  trapezio(const string& c, double b_ma, double b_me, double a): base_maior(b_ma), base_menor(b_me), altura(a){
    cout << "Trapezio criado!" << endl;
    cor = c;
  }

  double get_base_maior(){
    return base_maior;
  }

  void set_base_maior(double b_ma){
    base_maior = b_ma;
  }

  double get_base_menor(){
      return base_menor;
    }

  void set_base_menor(double b_me){
    base_menor = b_me;
  }

  double get_altura(){
    return altura;
  }

  void set_altura(double a){
    altura = a;
  }

  double get_area() const {
    return ((base_maior + base_menor) * altura) / 2;
  }
};


int main() {
  circulo cir1("AZUL", 10.5);
  retangulo re1("AMARELO", 5.6, 9.8);
  triangulo tri1("VERMELHO", 8.5, 10);
  trapezio tra1("VERDE", 10, 20, 7);

  poligono* p1 = &cir1;
  poligono* p2 = &re1;
  poligono* p3 = &tri1;
  poligono* p4 = &tra1;



  double soma_area = 0;

  soma_area = cir1.get_area() + re1.get_area(); 
  soma_area += tri1.get_area() + tra1.get_area();

  cout << "Soma das areas: " << soma_area << endl;

  soma_area = p1->get_area() + p2->get_area();
  soma_area += p3->get_area() + p4->get_area();

  cout << "Soma das areas: " << soma_area << endl;
  
  return 0;
}