#include<iostream>
using namespace std;

class BankAccount{
    int balance;

public:
    void setBalance(int b){
        balance = b;
    }

    void display(){
        cout<<"Current Balance = "<<balance<<endl;
    }

    // Friend function declaration
    friend void deposit(BankAccount &acc, int amount);
};

void deposit(BankAccount &acc, int amount){
    acc.balance = acc.balance + amount;
    cout<<"Amount Deposited: "<<amount<<endl;
}

int main(){
    BankAccount acc;

    acc.setBalance(1000);

    cout<<"Before Deposit:"<<endl;
    acc.display();

    deposit(acc,500);

    cout<<"After Deposit:"<<endl;
    acc.display();

    return 0;
}