#include<iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Constructor declaration
    Complex(int, int);

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// Constructor definition
Complex::Complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    // Implicit call
    Complex c1(4, 6);
    c1.printNumber();

    // Explicit call
    Complex c2 = Complex(5, 7);
    c2.printNumber();

    return 0;
}




//2nd type-->
/*
#include<iostream>
using namespace std;

class Complex {
    int a1,b1;

    public:
         Complex(int c1,int c2){
            a1 = c1;
            b1 = c2;
         }

        void display(){
            cout<<"Complex number = "<<a1<<" + "<<b1<<" i "<<endl;
        }

};
int main(){
    Complex com(3,5);

    com.display();

    return 0;
}
 */