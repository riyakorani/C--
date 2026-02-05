#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter a = ";
    cin >> a;

    cout << "Enter b = ";
    cin >> b;

    cout << "Enter operator (+,-,*,/) = ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Sum = " << (a + b) << endl;
            break;
        case '-':
            cout << "Subtraction = " << (a - b) << endl;
            break;
        case '*':
            cout << "Multiplication = " << (a * b) << endl;
            break;
        case '/':
            if(b != 0){
                cout << "Division = " << (a / b) << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Not a valid operator" << endl;
    }

    return 0;
}
