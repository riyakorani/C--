#include<iostream>
using namespace std;

class Base{
public:
    int x;

    void show(){
        cout<<"Base x: "<<x<<endl;
    }
};

class Derived : public Base{
public:
    int y;

    void show(){
        cout<<"x: "<<x<<" y: "<<y<<endl;
    }
};

int main(){

    Base *ptr;

    Base b;
    Derived d;

    ptr = &b;
    ptr->x = 5;
    ptr->show();

    ptr = &d;
    ptr->x = 10;
    ptr->show();

    return 0;
}