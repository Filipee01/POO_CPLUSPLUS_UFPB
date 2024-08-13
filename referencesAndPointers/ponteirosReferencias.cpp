// ponteiros e referencias

// sistema em c++ que traz tudo que aprendemos até agr -> biblioteca 

// associação -> composição(classe carro/motor) e agregação(obj são partes de outra classe, turma/aluno)

// diagrama de classes, dar uma lida no material 

// smart ponters -> evitar o memory liq 

// temos o unique_ptr, shared_ptr e weak_ptr

// std::cin >> x é o método de entrada de dados padrão de c++, é o scanf(x))

#include <iostream>
#include <memory> //serve para poder utiliar os smart pointers

class coisa {
int att;

public:
coisa(int i):att(i) {}//qnd começa essa chave, significa que o objeto já existe,  está alterando o atributo do objeto
  void fazer_algo() {
    std::cout << "coisa::fazer_algo(" << att << ")" << std::endl;
  }
};


int main(void) {
    std::unique_ptr<coisa> ptr = std::make_unique<coisa>(999); 

    ptr ->fazer_algo();

    std::unique_ptr<coisa> ptr2 = std::move(ptr); 
    std::unique_ptr<coisa>ptr2 = ptr; //impossivel de fazer isso, pois o ptr2 já foi movido para o ptr
  
    ptr2->fazer_algo();

    ptr->fazer_algo(); //aq da erro pois ptr aponta para uma posição vazia, null pointer excepted
  
  return 0;
}
