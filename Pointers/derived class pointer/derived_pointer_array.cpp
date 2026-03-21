#include<iostream>
using namespace std;

class Base{
public:
    int x;
};

class Derived : public Base{
public:
    int y;

    void show(){
        cout<<"x = "<<x<<" y = "<<y<<endl;
    }
};

int main(){

    Derived *ptr = new Derived[2];

    ptr[0].x = 10;
    ptr[0].y = 20;

    ptr[1].x = 30;
    ptr[1].y = 40;

    ptr[0].show();
    ptr[1].show();

    delete[] ptr;

    return 0;
}