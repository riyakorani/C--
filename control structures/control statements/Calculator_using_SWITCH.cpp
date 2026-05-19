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

    double result;

switch(op){
    case '+': result = a + b; break;
    case '-': result = a - b; break;
    case '*': result = a * b; break;
    case '/':
        if(b == 0){
            cout << "Error";
            return 0;
        }
        result = a / b;
        break;
    default:
        cout << "Invalid operator";
        return 0;
}

cout << "Result: " << result;

    return 0;
}
