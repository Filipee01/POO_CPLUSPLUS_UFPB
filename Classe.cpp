#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class pessoa {
    string nome;
    int idade;
public:
    pessoa(const string& n, int i) : nome(n), idade(i) {
        cout << "nome: " << nome << " idade: " << idade << endl;
    }
    
    string get_nome() const {
        return nome;
    }
    
    int get_idade() const {
        return idade;
    }
    
    void set_nome(const string& s) { 
        nome = s;
    }
     
    void set_idade(int i) {
        idade = i;
    }
     
    void print_info() const {
        cout << "Pessoa: " << nome << " idade: " << idade << endl;
    }
};

class professor : public pessoa {
    string titulacao;
    int ano_tit;
public:
    professor(const string& n, int i, const string& t, int a) 
        : pessoa(n, i), titulacao(t), ano_tit(a) {}
    
    string get_titulacao() const {
        return titulacao;
    }
    
    void set_titulacao(const string& t) {
        titulacao = t;
    }
    
    int get_ano_tit() const {
        return ano_tit;
    }
    
    void set_ano_tit(int a) {
        ano_tit = a;
    }
    
    void print_info() const {
        cout << "professor(" << get_idade();
        cout << ", " << get_nome() << ", ";
        cout << titulacao << ", " << ano_tit;
        cout << ")" << endl;
    }
};

class aluno : public pessoa {
    double cra;
    int matricula;
public:
    aluno(const string& n, int i, double c, int m) 
        : pessoa(n, i), cra(c), matricula(m) {}
    
    double get_cra() const {
        return cra;
    }
    
    void set_cra(double c) {
        cra = c;
    }
    
    int get_matricula() const {
        return matricula;
    }
    
    void set_matricula(int m) {
        matricula = m;
    }
    
    void print_info() const {
        cout << "aluno(" << get_idade();
        cout << ", " << get_nome() << ", ";
        cout << cra << ", " << matricula;
        cout << ")" << endl;
    }
};

class tecnico : public pessoa {
    string departamento;
    string funcao;
public:
    tecnico(const string& n, int i, const string& d, const string& f) 
        : pessoa(n, i), departamento(d), funcao(f) {
        cout << "tecnico() " << endl;
    }
    
    string get_departamento() const {
        return departamento;
    }
    
    void set_departamento(const string& d) {
        departamento = d;
    }
    
    void print_info() const {
        cout << "tecnico(" << get_idade();
        cout << ", " << get_nome() << ", ";
        cout << departamento << ", " << funcao;
        cout << ")" << endl;
    }
};

class turma {
    professor* prof;
    vector<aluno*> lista_aluno;

public: 
    turma(professor* p) : prof(p) {
        cout << "Turma()" << endl;
    }

    professor* get_professor() const {
        return prof;
    }
    
    void set_professor(professor* p) {
        prof = p;
    }
    
    void add_aluno(aluno* a) {
        lista_aluno.push_back(a);
    }
    
    void print_info() const {
        cout << "turma: " << endl;
        cout << "professor: ";
        prof->print_info();
        cout << "alunos:" << endl;
        for (auto i = lista_aluno.begin(); i != lista_aluno.end(); ++i) {
            (*i)->print_info();
        }
    }
};

class rh {
	vector<pessoa*> pessoal;
public:
		void add_pessoa(pessoa* p) {
			pessoa.push_back(p);
		}
		
		void print_info() {
			cout << "pessoal" << endl;
		}
};

int main() {
    pessoa p1("Ana Silva", 38);
    professor pr1("Joao Ferreira", 44, "Doutor", 2008);
    aluno al1("Maria Fernandes", 18, 9.5, 100123123);
    tecnico te1("Joao da Silva", 35, "DSC", "Assessor");
    
    turma tu1(&pr1);
    rh.add_pessoa(&p1);
    rh1.add_pessoa(&pr1);
    rh1.add_pessoa(&al1);
	rh1.add_pessoa(&te1);
	
    pr1.set_idade(41);
    
    p1.print_info();
    pr1.print_info();
    tu1.add_aluno(&al1);
    tu1.print_info();

    return 0;
}

