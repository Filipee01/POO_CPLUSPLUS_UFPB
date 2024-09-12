#include <iostream>
#include <string>

using std::cout;
using std::endl;

class device {
public:
	void power_on() const {
		cout << "Device on" << endl;
	}
};

class printer : public virtual device {

};

class scanner : public virtual device {

};

class multifuncional : public printer, public scanner {

};

/* criar classe multifuncional */

int main(void) {
	multifuncional m1;

	m1.power_on();

	return 0;
}
