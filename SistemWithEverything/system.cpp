/*
- Classe livro :
- atributos: titulo, ano de publicacao e autor(agregacao)
- metodos: construtor, destrutor, gets e sets, print_info

Classe autor:
- atributos: nome, data nasc, nacionalidade
- metodos: construtor, destrutor, gets e sets, print_info

Classe biblioteca:
- atributos: nome, endereço, colecao de livros(agregacao)
- metodos: construtor, destrutor, gets e sets, print_info
*/

#include <iostream>
#include <string>
#include <memory>
// using namespace std;// desperdicio de recurso associado
using std::cout;
using std::endl;
using std::string;

#define TAM_BIBLIOTECA 100;


class autor {
  string nome;
  string data_nascimento;
  string nacionalidade;
public:
  //metodo construtor da class autor, tem o msm nome da classe
// const permite q passa string literais
  autor( const string& n, const string& d, const string& na) : nome(n), data_nascimento(d), nacionalidade(na) {
    cout << "Autor: " << nome << " criado!" << endl;
  }
//destrutores
~autor() {
  cout <<"Autor: " << nome << " destruido!" << endl;
}
//gets e sets
  string get_nome() {
    return nome;
  }

string get_data_nascimento() {
  return data_nascimento;
}

//evitar desperdicio de recurso
//uso de referencias para aquele objeto que esta sendo passado e associar o conteudo
void set_nome(const string& n) {
  nome = n;
}

void set_data_nascimento(const string& d) {
  data_nascimento = d;
}

void set_nacionalidade(const string& na) {
  nacionalidade = na;
}
};

class livro {
  string titulo;
  int ano;
//shared pointer 
  std::shared_ptr<autor> autor_livro; //agregaçao
public: 
  livro(const string& t, int a, const std::shared_ptr<autor> au) : titulo(t), ano(a), autor_livro(au) {
    cout << "Livro: " << titulo << " criado!" << endl;
  }
~livro() {
  cout << "Livro: " << titulo << " destruido!" << endl;
}

int g

void set_titulo(const string& t) {
  titulo = t;
}

void 
};

class biblioteca {
  string nome;
  string endereco;
  std::shared_ptr<livro> colecao_[TAM_BIBLIOTECA]; // agregacao
public:
  biblioteca(const string& n, const string& e) : nome(n), endereco(e) {
    cout << "Biblioteca: " << nome << " criada!" << endl;
  }
~biblioteca() {
  cout << "Biblioteca: " << nome << " destruida!" << endl;
}
 string get_nome() {
   return nome;
 }

void set_nome(const string& n) {
  nome = n;
}

string get_endereco() {
  return endereco;
}

void set_endereco(const string& e) {
  endereco = e;
}


};


int main() {
  //autor a1("O senhor dos aneis", 1945, "J.R.R. Tolkien");  
  autor a1(nome_autor,data_nascimento, nacionalidade);
  string nome_autor = "Mahcadode Assis";
  string data_nascimento = "21/06/1893";
  string nacionalidade = "Brasileiro";
  a1.set_nome("Machado de Assis");
  autor a2(nome_autor, data_nascimento, nacionalidade);
  // autor a3("J.K Rolling", "21/06/1965", "Brasileiro");
  a1.print_info();
  a2.print_info();
  // a3.print_info();
  
  return 0;
}
