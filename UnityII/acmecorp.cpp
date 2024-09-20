/*

### Requisitos:

1. **Classe Abstrata `employee`**:
   - Crie uma classe abstrata `employee`, que define uma interface para todos os funcionários.
   - Deve ter atributos como `name`, `id`, e `base_salary`.
   - Deve ter um método virtual puro `get_role()` para obter o cargo do funcionário.
   - Deve ter um método virtual para calcular o salário, `calculate_salary()`.
   - Um método `show_info()` deve exibir informações sobre o funcionário.

2. **Classe `developer` e `manager` (Herança Simples)**:
   - Crie duas classes derivadas de `employee`: `developer` e `manager`.
   - **`developer`** deve conter um atributo adicional, `programming_language`, para indicar a linguagem de programação principal.
   - **`manager`** deve ter um atributo `team_size` para armazenar o número de pessoas sob sua supervisão.

3. **Herança Múltipla (Gerente que também é Desenvolvedor)**:
   - Crie uma classe `tech_lead`, que representa um funcionário que é tanto **Gerente** quanto **Desenvolvedor**.
   - **Utilize herança múltipla**: `tech_lead` deve herdar de ambas as classes `developer` e `manager`.
   - Esta classe deve calcular o salário com base tanto no time gerenciado quanto nas habilidades técnicas.

4. **Herança Virtual**:
   - Use **herança virtual** nas classes `developer` e `manager` para evitar duplicação de atributos comuns, como `name` e `base_salary`.

5. **Atributos e Métodos Estáticos**:
   - Na classe `employee`, adicione um atributo estático `total_employees` para contar quantos funcionários foram criados (faça a alteração necessária para que cada nova instância gere um incremento para esse contador).
   - Crie um método estático `get_total_employees()` para retornar esse valor.

*/

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class employee {
    string name;
    int id;
    double base_salary;
    static int total_employees;
public:
    employee(string n, int i, double bs) : name(n), id(i), base_salary(bs) {
        total_employees++;
    }

    ~employee() {
        total_employees--;
    }

    string get_name() const {
        return name;
    }

    void set_name(string n) {
        name = n;
    }

    int get_id() const {
        return id;
    }

    void set_id(int i) {
        id = i;
    }

    double get_base_salary() const {
        return base_salary;
    }

    void set_base_salary(double bs) {
        base_salary = bs;
    }

    virtual double calculate_salary() const {
        return base_salary;
    }

    virtual string get_role() = 0;

    virtual void show_info() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Base Salary: " << base_salary << endl;
    }

    static int get_total_employees() {
        return total_employees;
    }
};

int employee::total_employees = 0;

class developer : public virtual employee {
    string programming_language;
public:
    developer(string n, int i, double bs, string pl) : employee(n, i, bs), programming_language(pl) {}

    string get_programming_language() const {
        return programming_language;
    }

    void set_programming_language(string pl) {
        programming_language = pl;
    }

    string get_role() override {
        return "Developer";
    }

    double calculate_salary() const override {
        return get_base_salary() * 1.2;
    }

    void show_info() override {
        employee::show_info();
        cout << "Programming Language: " << programming_language << endl;
    }
};

class manager : public virtual employee {
    int team_size;
public:
    manager(string n, int i, double bs, int ts) : employee(n, i, bs), team_size(ts) {}

    int get_team_size() const {
        return team_size;
    }

    void set_team_size(int ts) {
        team_size = ts;
    }

    string get_role() override {
        return "Manager";
    }

    double calculate_salary() const override {
        return (get_base_salary() * 2) + (team_size * 200);
    }

    void show_info() override {
        employee::show_info();
        cout << "Team Size: " << team_size << endl;
    }
};

class tech_lead : public developer, public manager {
public:
    tech_lead(string n, int i, double bs, string pl, int ts) : employee(n, i, bs), developer(n, i, bs, pl), manager(n, i, bs, ts) {}

    string get_role() override {
        return "Tech Lead";
    }

    double calculate_salary() const override {
        return developer::calculate_salary() + manager::calculate_salary();
    }

    void show_info() override {
        employee::show_info();
        cout << "Programming Language: " << developer::get_programming_language() << endl;
        cout << "Team Size: " << manager::get_team_size() << endl;
    }
};

/*
2. **No programa principal**:
   - Realize o cadastro dos membros de uma equipe composta por um Gerente,
     dois "Tech Lead" e cinco desenvolvedores. 
   - Exiba todas as informações desses funcionários, incluindo o cálculo do salário.
   - Exiba a quantidade de funcionários cadastrados a partir do contador embutido na classe `employee`.
   - Exiba uma lista com todas as linguagens de programação dos desenvolvedores e também dos "tech leads".

*/

int main() {
    manager m("Alice", 1, 5000, 7);
    tech_lead tl1("Bob", 2, 4000, "C++", 3);
    tech_lead tl2("Charlie", 3, 4000, "Python", 4);
    developer d1("David", 4, 3000, "Java");
    developer d2("Eve", 5, 3000, "JavaScript");
    developer d3("Frank", 6, 3000, "Ruby");
    developer d4("Grace", 7, 3000, "Swift");
    developer d5("Heidi", 8, 3000, "Kotlin");
    developer* pd1 = new developer("Ivan", 9, 3000, "Go");

    cout << "-----------------------------------" << endl;

    cout << "ACME Corp." << endl;
    cout << "-----------------------------------" << endl;

    cout << "Total Employees: " << employee::get_total_employees() << endl << endl;

    employee* employees[] = {&m, &tl1, &tl2, &d1, &d2, &d3, &d4, &d5, pd1};

    for (auto e : employees) {
        e->show_info();
        cout << "Role: " << e->get_role() << endl;
        cout << "Salary: " << e->calculate_salary() << endl << endl;
    }

    cout << "-----------------------------------" << endl;

    cout << "Programming Languages:" << endl;
    for (auto e : employees) {
        if (e->get_role() == "Developer" || e->get_role() == "Tech Lead") {
            cout << e->get_name() << ": " << dynamic_cast<developer*>(e)->get_programming_language() << endl;
        }
    }

    cout << "-----------------------------------" << endl;

    cout << "Deleting Ivan..." << endl;

    delete pd1;

    cout << "New total Employees: " << employee::get_total_employees() << endl;


    return 0;
};