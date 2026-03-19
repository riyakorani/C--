// Using = During Initialization


#include<iostream>
using namespace std;

class Demo{
    int a;

public:
    Demo(int x){
        a = x;
    }

    Demo(Demo &d){
        cout<<"Copy constructor called"<<endl;
        a = d.a;
    }

    void display(){
        cout<<"a = "<<a<<endl;
    }
};

int main(){
    Demo d1(20);
    Demo d2 = d1;

    d1.display();
    d2.display();

    return 0;
}