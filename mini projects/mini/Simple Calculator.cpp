#include<iostream>
using namespace std;

class Calculator{
    int a,b;

public:
    void setData(){
        cout<<"Enter two numbers: ";
        cin>>a>>b;
    }

    void add(){
        cout<<"Sum = "<<a+b<<endl;
    }

    void sub(){
        cout<<"Difference = "<<a-b<<endl;
    }

    void mul(){
        cout<<"Product = "<<a*b<<endl;
    }
};

int main(){
    Calculator c;

    c.setData();
    c.add();
    c.sub();
    c.mul();

    return 0;
}
