#include<iostream>
using namespace std;

class Circle{
    float radius;

public:
    Circle(float r){
        radius = r;
    }

    void area(){
        cout<<"Area = "<<3.14*radius*radius<<endl;
    }
};

int main(){

    float r;

    cout<<"Enter radius: ";
    cin>>r;

    Circle c(r);   // Dynamic initialization

    c.area();

    return 0;
}