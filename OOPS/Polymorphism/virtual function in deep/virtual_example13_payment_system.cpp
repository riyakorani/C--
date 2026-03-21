#include<iostream>
using namespace std;

class Payment{
protected:
    float amount;

public:
    Payment(float a){
        amount = a;
    }

    virtual void pay(){}
};

class CardPayment : public Payment{
public:
    CardPayment(float a) : Payment(a){}

    void pay(){
        cout<<"Payment of "<<amount<<" done using Card"<<endl;
    }
};

class UPIPayment : public Payment{
public:
    UPIPayment(float a) : Payment(a){}

    void pay(){
        cout<<"Payment of "<<amount<<" done using UPI"<<endl;
    }
};

int main(){

    Payment* p[2];

    CardPayment c(2000);
    UPIPayment u(1500);

    p[0] = &c;
    p[1] = &u;

    p[0]->pay();
    p[1]->pay();
}