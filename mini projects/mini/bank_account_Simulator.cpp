#include<iostream>
using namespace std;

class Bank{
    int balance;

public:
    void init(){
        balance = 0;
    }

    void deposit(){
        int amount;
        cout<<"Enter amount to deposit: ";
        cin>>amount;
        balance += amount;
    }

    void withdraw(){
        int amount;
        cout<<"Enter amount to withdraw: ";
        cin>>amount;

        if(amount <= balance)
            balance -= amount;
        else
            cout<<"Insufficient balance\n";
    }

    void show(){
        cout<<"Current Balance = "<<balance<<endl;
    }
};

int main(){
    Bank b;
    int choice;

    b.init();

    do{
        cout<<"\n1 Deposit\n2 Withdraw\n3 Show Balance\n4 Exit\n";
        cin>>choice;

        if(choice==1) b.deposit();
        else if(choice==2) b.withdraw();
        else if(choice==3) b.show();

    }while(choice!=4);

    return 0;
}