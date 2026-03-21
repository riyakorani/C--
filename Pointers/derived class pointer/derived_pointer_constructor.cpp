#include<iostream>
using namespace std;

class Base{
public:
    int a;

    Base(){
        a = 50;
    }
};

class Derived : public Base{
public:
    int b;

    Derived(){
        b = 100;
    }

    void show(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};

int main(){

    Derived *ptr = new Derived;

    ptr->show();

    delete ptr;

    return 0;
}