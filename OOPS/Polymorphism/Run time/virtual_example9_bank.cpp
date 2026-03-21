#include<iostream>
using namespace std;

class Bank{
public:
    virtual void interest(){
        cout<<"Bank interest rate"<<endl;
    }
};

class SBI : public Bank{
public:
    void interest(){
        cout<<"SBI Interest = 7%"<<endl;
    }
};

class HDFC : public Bank{
public:
    void interest(){
        cout<<"HDFC Interest = 8%"<<endl;
    }
};

int main(){

    Bank* b;

    SBI s;
    HDFC h;

    b = &s;
    b->interest();

    b = &h;
    b->interest();

    return 0;
}