#include<iostream>
using namespace std;

class Payment{
public:
    virtual void pay() = 0;
};

class Card : public Payment{
public:
    void pay(){
        cout<<"Paid using Card"<<endl;
    }
};

class Cash : public Payment{
public:
    void pay(){
        cout<<"Paid using Cash"<<endl;
    }
};

int main(){

    Payment* p;

    Card c;
    Cash ca;

    p = &c;
    p->pay();

    p = &ca;
    p->pay();
}