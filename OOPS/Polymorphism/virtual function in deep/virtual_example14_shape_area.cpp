#include<iostream>
using namespace std;

class Shape{
public:
    virtual void area(){}
};

class Rectangle : public Shape{
    int l,b;

public:
    Rectangle(int x,int y){
        l=x;
        b=y;
    }

    void area(){
        cout<<"Area of Rectangle: "<<l*b<<endl;
    }
};

class Circle : public Shape{
    float r;

public:
    Circle(float x){
        r=x;
    }

    void area(){
        cout<<"Area of Circle: "<<3.14*r*r<<endl;
    }
};

int main(){

    Shape* s[2];

    Rectangle r(4,5);
    Circle c(3);

    s[0] = &r;
    s[1] = &c;

    s[0]->area();
    s[1]->area();
}