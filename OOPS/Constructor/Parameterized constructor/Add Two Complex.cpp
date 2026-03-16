#include<iostream>
using namespace std;

class Complex{
    int a,b;
    friend void add(Complex,Complex);

public:
    Complex(int x,int y){
        a = x;
        b = y;
    }

    void display(){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};

void add(Complex c1, Complex c2){
    cout<<"Sum = "<<c1.a + c2.a<<" + "<<c1.b + c2.b<<"i"<<endl;
}

int main(){
    Complex c1(2,3);
    Complex c2(4,5);

    c1.display();
    c2.display();

    add(c1,c2);

    return 0;
}