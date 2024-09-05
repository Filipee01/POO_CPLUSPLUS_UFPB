#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;



class person {
string name;
int age;
public:
  person(const string& n, int a): name(n), age(a) {
    cout << "person criada\n";
  };

  string get_name() const {
    return name;
  }

  void set_name(const string& n) {
    name = n;
  }

  int get_age() const {
    return age;
  }
  
  void set_age(int a) {
    age = a;
  }

   virtual void print_info() {
    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
  }
};

class client : public person { // pode omitir o private pois vem como default
  string membership_type;
public:
  client(const string& n, int a, const string& t): person(n, a), membership_type(t) {
    cout << "client criado\n";
  }
  string get_membership_type() {
    return membership_type;
  }

  void set_membership_type(const string& t) {
    membership_type = t;
  }

  void print_info() {
    person::print_info();
    cout << "client(" << membership_type << ")" << endl;
  }
};

class employee : protected person {
  double salary;
public:
  employee(const string& n, int a, double s): person(n, a), salary(s) {
    cout << "employee criado\n";
  }

  double get_salary() const {
    return salary;
  }

  void set_salary(double s) {
    salary = s;
  }

void print_info_employee() {
  print_info();
  cout << "employee(" << salary << ")" << endl;
}

};

class trainer : private person {
  string specialty;

public: 
  trainer(const string& n, int a, const string& s): person(n, a), specialty(s) {
    cout << "trainer criado\n";
  }

  string get_specialty() const {
    return specialty;
  }

  void set_speciality(const string& s) {
    specialty = s;
  }

  void print_info_trainer() {
    print_info();
    cout << "trainer(" << specialty << ")" << endl;
  }

};


int main(void) {
client c1("Joao", 20, "Gold");
employee e1("Maria", 30, 5000);
trainer t1("Pedro", 40, "Yoga");

person* pp1;
pp1 = &c1; // só possivel qnd tem herança publica
pp1-> print_info();

// c1.print_info();
// // e1.print_info(); //erro metodo protected
// // t1.print_info(); //erro metodo private
//   e1.print_info_employee();
//   t1.print_info_trainer();
return 0;
}