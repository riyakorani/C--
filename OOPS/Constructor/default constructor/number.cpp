#include<iostream>
using namespace std;

class Number
{
    int a, b;

public:
    Number()
    {
        a = 10;
        b = 20;
    }

    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    Number n1;
    n1.display();
}