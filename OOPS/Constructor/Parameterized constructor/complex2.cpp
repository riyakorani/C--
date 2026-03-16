#include<iostream>
using namespace std;

class Complex{
    int a,b;

public:
    Complex(int x,int y){
        a = x;
        b = y;
    }

    void show(){
        cout << a << " + " << b << "i" << endl;
    }
};

int main(){
    Complex c1(2,3);
    Complex c2(4,5);

    c1.show();
    c2.show();

    return 0;
}