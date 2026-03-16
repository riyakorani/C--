#include<iostream>
using namespace std;

class ATM{
    int balance;

public:
    void init(){
        balance = 1000;
    }

    void check(){
        cout<<"Balance = "<<balance<<endl;
    }

    void deposit(){
        int amount;
        cout<<"Enter amount: ";
        cin>>amount;
        balance += amount;
    }

    void withdraw(){
        int amount;
        cout<<"Enter amount: ";
        cin>>amount;

        if(amount<=balance)
            balance -= amount;
        else
            cout<<"Not enough balance\n";
    }
};

int main(){
    ATM a;
    int choice;

    a.init();

    do{
        cout<<"\n1 Check\n2 Deposit\n3 Withdraw\n4 Exit\n";
        cin>>choice;

        if(choice==1) a.check();
        else if(choice==2) a.deposit();
        else if(choice==3) a.withdraw();

    }while(choice!=4);

    return 0;
}