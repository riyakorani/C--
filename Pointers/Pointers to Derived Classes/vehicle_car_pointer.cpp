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
        cout<<"Vehicle speed: "<<speed<<endl;
        cout<<"Car gear: "<<gear<<endl;
    }
};

int main(){

    Vehicle *vehicle_pointer;
    Vehicle obj_vehicle;
    Car obj_car;

    vehicle_pointer = &obj_car;

    vehicle_pointer->speed = 120;
    vehicle_pointer->show();

    Car *car_pointer;
    car_pointer = &obj_car;

    car_pointer->speed = 150;
    car_pointer->gear = 5;
    car_pointer->show();

    return 0;
}