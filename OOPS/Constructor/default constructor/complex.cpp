#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) // ----> This is a default constructor as it takes no parameters
{
    a = 10;
    b = 0;
    // cout<<"Hello world";
}

int main()
{
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}



//2nd way-->
/*
#include<iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 2;
        b = 3;
    }

    void show()
    {
        cout << "Complex Number: " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.show();
    c2.show();
    c3.show();
}
*/
