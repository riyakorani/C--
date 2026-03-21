#include<iostream>
using namespace std;

class Vehicle{
public:
    virtual void start(){
        cout<<"Vehicle starting"<<endl;
    }
};

class Car : public Vehicle{
public:
    void start(){
        cout<<"Car starting with key"<<endl;
    }
};

class Bike : public Vehicle{
public:
    void start(){
        cout<<"Bike starting with self"<<endl;
    }
};

int main(){

    Vehicle* v;

    Car c;
    Bike b;

    v = &c;
    v->start();

    v = &b;
    v->start();

    return 0;
}