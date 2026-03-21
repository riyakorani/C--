#include<iostream>
using namespace std;

class Base{
public:
    virtual void show(){
        cout<<"This is Base class show function"<<endl;
    }
};

class Derived : public Base{
public:
    void show(){
        cout<<"This is Derived class show function"<<endl;
    }
};

int main(){

    Base* ptr;
    Base b;

    ptr = &b;

    ptr->show();

    return 0;
}