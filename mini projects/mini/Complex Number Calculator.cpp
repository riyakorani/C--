#include<iostream>
using namespace std;

class Complex{
    int r,i;

public:
    void setData(int a,int b){
        r=a;
        i=b;
    }

    void add(Complex c1, Complex c2){
        r = c1.r + c2.r;
        i = c1.i + c2.i;
    }

    void display(){
        cout<<r<<" + "<<i<<"i"<<endl;
    }
};

int main(){
    Complex c1,c2,c3;

    c1.setData(2,3);
    c2.setData(4,5);

    c3.add(c1,c2);

    cout<<"Result: ";
    c3.display();

    return 0;
}