#include<iostream>
using namespace std;

class Bank{
    int balance;

public:
    void deposit(int amount){
        balance += amount;
    }

    void show(){
        cout<<"Balance = "<<balance<<endl;
    }
};

int main(){
    Bank b;

    b.deposit(1000);
    b.deposit(500);

    b.show();

    return 0;
}
