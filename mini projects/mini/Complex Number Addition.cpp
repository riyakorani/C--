#include<iostream>
using namespace std;

class Complex{
    int real,img;

public:
    void setData(int r,int i){
        real=r;
        img=i;
    }

    void add(Complex c1, Complex c2){
        real = c1.real + c2.real;
        img  = c1.img + c2.img;
    }

    void display(){
        cout<<"Complex = "<<real<<" + "<<img<<"i"<<endl;
    }
};

int main(){
    Complex c1,c2,c3;

    c1.setData(2,3);
    c2.setData(4,5);

    c3.add(c1,c2);

    c3.display();

    return 0;
}
