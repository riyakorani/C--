#include<iostream>
using namespace std;

class Bank{
    int balance;

public:
    void deposit();
    void display();
};

void Bank::deposit(){
    int amount;

    cout<<"Enter deposit amount: ";
    cin>>amount;

    balance = amount;

    display();   // nested function
}

void Bank::display(){
    cout<<"Balance = "<<balance<<endl;
}

int main(){
    Bank b;

    b.deposit();
}