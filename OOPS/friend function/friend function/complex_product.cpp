#include<iostream>
using namespace std;

class Complex{
    int a, b;

public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }

    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }

    friend Complex productComplex(Complex, Complex);
};

Complex productComplex(Complex o1, Complex o2){
    Complex o3;

    int real = (o1.a * o2.a) - (o1.b * o2.b);
    int imag = (o1.a * o2.b) + (o1.b * o2.a);

    o3.setNumber(real, imag);

    return o3;
}

int main(){
    Complex c1, c2, product;

    c1.setNumber(1,4);
    c1.printNumber();

    c2.setNumber(5,8);
    c2.printNumber();

    product = productComplex(c1,c2);
    product.printNumber();

    return 0;
}
