#include<iostream>
using namespace std;

class Parent{
public:
    int x;

    void show(){
        cout<<"Parent x = "<<x<<endl;
    }
};

class Child : public Parent{
public:
    int y;

    void display(){
        cout<<"Child y = "<<y<<endl;
    }
};

int main(){

    Child c;
    Child *ptr;

    ptr = &c;

    ptr->x = 5;
    ptr->y = 15;

    ptr->show();
    ptr->display();

    return 0;
}