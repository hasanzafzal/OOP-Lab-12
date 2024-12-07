#include <iostream>
#include <cmath>
using namespace std;

class Power {
protected:
	double number;
public:
	void getdata() {
		cout << "Enter the number: ";
		cin >> number;
	}
	virtual double result() {
		return 0.0;
	}
};
class Square : public Power {
public:
	double result() {
		return pow(number, 2);
	}
};
class Cube : public Power {
public:
	double result() {
		return pow(number, 3);
	}
};
class Four : public Power {
public:
	double result() {
		return pow(number, 4);
	}
};
class Five : public Power {
public:
	double result() {
		return pow(number, 5);
	}
};

int main() {
	int choice;
	Power* power;
	cout << "Select an option:" << endl;
	cout << "1: x^2 :" << endl;
	cout << "2: x^3 :" << endl;
	cout << "3: x^4 :" << endl;
	cout << "4: x^5 :" << endl;
	cout << "Enter the right choice : ";
	cin >> choice;
	switch (choice) {
	case 1:
		power = new Square();
		break;
	case 2:
		power = new Cube();
		break;
	case 3:
		power = new Four();
		break;
	case 4:
		power = new Five();
		break;
	default:
		cout << "Invalid choice. Press any key to continue." << endl;
		cin.ignore();
		cin.get();
		return 0;
	}
	power->getdata();
	double result = power->result();
	cout << "Result: " << result << endl;
	delete power;
	return 0;
}