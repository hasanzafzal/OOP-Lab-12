#include <iostream>
using namespace std;

class Factorial {
public:
    virtual int calculate(int n) = 0; 
};

class IterativeFactorial : public Factorial {
public:
    int calculate(int n) {
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        return fact;
    }
};

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    Factorial* fact;
    fact = new IterativeFactorial();
    cout << "Factorial = " << fact->calculate(num) << endl;
    return 0;
}