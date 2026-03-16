#include<iostream>
using namespace std;

class Rectangle{
    int l,b;

public:
    void setData();
    void area();
    void perimeter();
};

void Rectangle::setData(){
    cout<<"Enter length and breadth: ";
    cin>>l>>b;

    area();        // nested
    perimeter();   // nested
}

void Rectangle::area(){
    cout<<"Area = "<<l*b<<endl;
}

void Rectangle::perimeter(){
    cout<<"Perimeter = "<<2*(l+b)<<endl;
}

int main(){
    Rectangle r;

    r.setData();
}