// #include <iostream>
// #include <memory> //serve para poder utiliar os smart pointers

// class coisa {
// int att;

// public:
// coisa(int i):att(i) {}
//   void fazer_algo() {
//     std::cout << "coisa::fazer_algo(" << att << ")" << std::endl;
//   }
// };


// int main(void) {
//     std::shared_ptr<coisa> ptr1 = std::make_shared<coisa>(997);
//     std::weak_ptr<coisa> wpt1 = ptr1; // cria uma copia sem inscrementar refs do shared


//     std::cout << "Contagem de refs: " << ptr1.use_count() << std::endl;
//     ptr1->fazer_algo();

//   if (auto shared_ptr = wpt1.lock()) {
//     shared_ptr -> fazer_algo();
//   }else {
//     std::cout << "Recurso não mais disponivel" << std::endl;
//   }

//   return 0;
// }
