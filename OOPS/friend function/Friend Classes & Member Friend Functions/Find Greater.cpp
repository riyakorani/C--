#include <iostream>
using namespace std;

class Number {
    int num;

public:
    void setNumber(int n) {
        num = n;
    }

    // Passing by reference (const Number&) is faster and safer
    friend void findGreater(const Number&, const Number&);
};

void findGreater(const Number& n1, const Number& n2) {
    if (n1.num > n2.num) {
        cout << "Greater number is: " << n1.num << endl;
    } else if (n2.num > n1.num) {
        cout << "Greater number is: " << n2.num << endl;
    } else {
        cout << "Both numbers are equal: " << n1.num << endl;
    }
}

int main() {
    Number n1, n2;

    n1.setNumber(10);
    n2.setNumber(25);

    findGreater(n1, n2);

    return 0;
}