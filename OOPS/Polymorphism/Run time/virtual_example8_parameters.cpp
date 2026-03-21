#include<iostream>
using namespace std;

class Calculator{
public:
    virtual void operation(int a,int b){
        cout<<"Base operation"<<endl;
    }
};

class Add : public Calculator{
public:
    void operation(int a,int b){
        cout<<"Addition = "<<a+b<<endl;
    }
};

class Multiply : public Calculator{
public:
    void operation(int a,int b){
        cout<<"Multiplication = "<<a*b<<endl;
    }
};

int main(){

    Calculator* ptr;

    Add a;
    Multiply m;

    ptr = &a;
    ptr->operation(4,5);

    ptr = &m;
    ptr->operation(4,5);

    return 0;
}