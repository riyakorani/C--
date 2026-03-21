#include<iostream>
using namespace std;

class Base{
public:
    int x = 10;

    virtual void display(){
        cout<<"Base x = "<<x<<endl;
    }
};

class Derived : public Base{
public:
    int y = 20;

    void display(){
        cout<<"Base x = "<<x<<endl;
        cout<<"Derived y = "<<y<<endl;
    }
};

int main(){

    Base* ptr;
    Derived obj;

    ptr = &obj;

    ptr->display();

}