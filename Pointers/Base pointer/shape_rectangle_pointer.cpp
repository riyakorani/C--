#include<iostream>
using namespace std;

class Shape{
public:
    void area(){
        cout<<"Area of shape"<<endl;
    }
};

class Rectangle : public Shape{
public:
    void area(){
        cout<<"Area of rectangle"<<endl;
    }
};

int main(){ 

    Shape *ptr;
    Rectangle r;

    ptr = &r;

    ptr->area();

    return 0;
}