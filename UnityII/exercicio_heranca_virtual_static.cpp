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
    employee(const string& n, int i, double s): name(n), id(i), base_salary(s) {
        cout << "Employee criado" << endl;
        total_employees++;
    }

    virtual ~employee() {
        cout << "Employee destruido" << endl;
        total_employees--;
    }

    virtual string get_role() const = 0;

    virtual double calculate_salary() {
        return base_salary;
    }

    string get_name() {
        return name;
    }

    void set_name(const string& n) {
        name = n;
    }

    int get_id() {
        return id;
    }

    void set_id(int i) {
        id = i;
    }

    double get_base_salary() {
        return base_salary;
    }

    void set_get_base_salary(double s) {
        base_salary = s;
    }

    void show_info() {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
        cout << "Base Salary: " << base_salary << endl;

    }

    static int get_total_employees() {
        return total_employees;
    }
};

    int employee::total_employees = 0;



class developer : virtual public employee {
    string programming_language;

public:
    developer(const string& n, int i, double s, const string& plang): employee(n,i,s), programming_language(plang) {
        cout << "Developer criado" << endl;
    }

    string get_programming_language() {
        return programming_language;
    }

    void set_programming_language(const string& plang) {
        programming_language = plang;
    }

    string get_role() const {
       return "Developer";
    }

    void show_info() {
        employee::show_info();
        cout << "Programming language: " << programming_language << endl;
    }
};


class manager : virtual public employee {
    int team_size;

public:
    manager(const string& n, int i, double s, int t): employee(n, i, s), team_size(t) {
        cout << "Manager criado" << endl;
    }

    int get_team_size() {
        return team_size;
    }

    void set_team_size(int t) {
        team_size = t;
    }

    string get_role() const {
        return "Manager";
    }

    void show_info() {
        employee::show_info();
        cout << "Team size: " << team_size << endl;
    }

};

class tech_lead : public developer, public manager {
public:
    tech_lead(const string& n, int i, double s, const string& plang, int t): employee(n, i, s), developer(n,i,s,plang), manager(n,i,s,t) {
        cout << "Tech_lead criado" << endl;
    }

    string get_role() const {
        return "Tech Lead";
    }

    double calculate_salary() {
        return get_base_salary() + (get_team_size() * 500);
    }

    void show_info() {
        developer::show_info();
        cout << "Team size: " << get_team_size() << endl;
    }
};


int main(void) {
    manager m1("Alice", 1, 5000, 10);
    tech_lead t1("Bob", 2, 7000, "C++", 5);
    developer d1("Charlie", 3, 4000, "Python");

    m1.show_info();
    cout << "Role: " << m1.get_role() << endl;
    cout << "Salario: " << m1.calculate_salary() << endl;

    t1.show_info();
    cout << "Role: " << t1.get_role() << endl;
    cout << "Salario: " << t1.calculate_salary() << endl;

    d1.show_info();
    cout << "Role: " << d1.get_role() << endl;
    cout << "Salario: " << d1.calculate_salary() << endl;

    cout << "Total de funcionarios: " << employee::get_total_employees() << endl;

    return 0;
}