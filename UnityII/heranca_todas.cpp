#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class person {
	string name;
	int age;
public:
	person(const string& n, int a) : name(n), age(a) { }
	string get_name() const { return name; }
	void set_name(const string& n) { name = n; }
	int get_age() const { return age; }
	void set_age(int a) { age = a; }
	virtual void print_info() {
		cout << "person(" << name << ", ";
		cout << age << ") " << endl;
	}

};

class client : public person {
	string membership_type;
public:
	client(const string& n, int a, const string& mt):
				person(n, a),
				membership_type(mt) { }
	string get_membership_type() {
		return membership_type;
	}
	void set_membership_type(const string& mt) {
		membership_type = mt;
	}
	void print_info() {
		person::print_info();
		cout << "client(" << membership_type << ")" << endl;
	}
};

class employee : protected person {
	double salary;
public:
	employee(const string& n, int a, double s):
					person(n,a),
					salary(s) { }
	double get_salary() const { return salary; }
	void set_salary(double s) { salary = s; }
	void print_info_emp() {
		print_info();
		cout << "employee(" << salary << ")" << endl;
	}
};

class trainer : private person {
	string specialty;
public:
	trainer(const string& n, int a, const string& s):
					person(n,a),
					specialty(s) { }
	string get_specialty() const { return specialty; }
	void set_specialty(const string& s) {
		specialty = s;
	}
	void print_info_tra() {
		print_info();
		cout << "trainer(" << specialty << ")" << endl;
	}
};

int main(void) {
	person* pp1;
	client c1("John Doe", 35, "VIP");
	employee e1("Mary Doe", 28, 4000);
	trainer t1("Joseph Johnson", 18, "Developer");

/*
	c1.print_info();
	//e1.print_info(); - ERRO!
	//t1.print_info(); - ERRO!
	e1.print_info_emp();
	t1.print_info_tra();
*/
	pp1 = &c1;

	pp1->print_info();

	pp1 = &e1;


};
