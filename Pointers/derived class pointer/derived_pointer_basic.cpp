#include<iostream>
using namespace std;

class Base{
public:
    int a;

    void showBase(){
        cout<<"Base variable a: "<<a<<endl;
    }
};

class Derived : public Base{
public:
    int b;

    void showDerived(){
        cout<<"Derived variable b: "<<b<<endl;
    }
};

int main(){

    Derived obj;
    Derived *ptr;

    ptr = &obj;

    ptr->a = 10;
    ptr->b = 20;

    ptr->showBase();
    ptr->showDerived();

    return 0;
}