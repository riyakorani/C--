#include<iostream>
using namespace std;

class Bank{
private:
    int balance;

public:
    void setBalance(int b){
        balance=b;
    }

    void deposit(int d){
        balance += d;
    }

    void showBalance(){
        cout<<"Balance = "<<balance<<endl;
    }
};

int main(){
    Bank b;

    b.setBalance(1000);
    b.deposit(500);
    b.showBalance();
}