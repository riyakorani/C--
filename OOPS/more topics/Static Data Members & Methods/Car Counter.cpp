#include<iostream>
using namespace std;

class Car
{
    int carId;
    static int count;

public:

    void setData(){
        cout<<"Enter car id: ";
        cin>>carId;
        count++;
    }

    void getData(){
        cout<<"Car ID: "<<carId
            <<" and this is car number "<<count<<endl;
    }

    static void getCount(){
        cout<<"Total cars: "<<count<<endl;
    }
};

int Car::count;

int main(){

    Car c1, c2, c3;

    c1.setData();
    c1.getData();
    Car::getCount();

    c2.setData();
    c2.getData();
    Car::getCount();

    c3.setData();
    c3.getData();
    Car::getCount();

}