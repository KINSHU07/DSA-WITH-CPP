#include<iostream>
#include<cmath>
using namespace std;

class simple {
    int a, b;

public:
    void getdatasimple() {
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;
    }

    void performsimple() {
        cout << "Value of a + b is: " << a + b << endl;
        cout << "Value of a - b is: " << a - b << endl;
        cout << "Value of a * b is: " << a * b << endl;

        if (b != 0) {
            cout << "Value of a / b is: " << a / b << endl;
        } else {
            cout << "Division by zero is not allowed!" << endl;
        }
    }
};

class scientific {
    int a, b;

public:
    void getdatascientific() {
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;
    }

    void performscientific() {
        cout << "Value of cos(a) is: " << cos(a) << endl;
        cout << "Value of log(b) is: " << log(b) << endl;

        if (b > 0) {
            cout << "Value of log(b) is: " << log(b) << endl;
        } else {
            cout << "Logarithm is not defined for non-positive values of b." << endl;
        }

        cout << "Value of exp(a * b) is: " << exp(a * b) << endl;
        cout << "Value of tan(a * cos(b)) is: " << tan(a * cos(b)) << endl;
    }
};

class hybrid: public simple, public scientific{
    
};

int main() {
    hybrid calc;
    calc.getdatascientific();
    calc.performscientific();
  
    calc.performsimple();

    return 0;
}
