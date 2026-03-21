#include<iostream>
using namespace std;

class Vehicle{
public:
    int speed;
    void show(){
        cout<<"Vehicle speed: "<<speed<<endl;
    }
};

class Car : public Vehicle{
public:
    int gear;
    void show(){
        cout<<"Speed: "<<speed<<endl;
        cout<<"Gear: "<<gear<<endl;
    }
};

int main(){

    Vehicle *ptr;
    Car c;

    ptr = &c;

    ptr->speed = 120;
    ptr->show();

    return 0;
}