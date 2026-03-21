#include<iostream>
using namespace std;

class Payment{
public:
    virtual void pay() = 0;
};

class Card : public Payment{
public:
    void pay(){
        cout<<"Payment done using Card"<<endl;
    }
};

class UPI : public Payment{
public:
    void pay(){
        cout<<"Payment done using UPI"<<endl;
    }
};

int main(){

    Payment* p[2];

    Card c;
    UPI u;

    p[0] = &c;
    p[1] = &u;

    p[0]->pay();
    p[1]->pay();

}