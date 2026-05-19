#include<iostream>
using namespace std;

class ATM{
    int balance = 1000;

public:

    void checkBalance(){
        cout<<"Current Balance: "<<balance<<endl;
    }

    void deposit(){
        int amount;
        cout<<"Enter amount to deposit: ";
        cin>>amount;
        balance += amount;
        cout<<"Deposit successful"<<endl;
    }

    void withdraw(){
        int amount;
        cout<<"Enter amount to withdraw: ";
        cin>>amount;

        if(amount <= balance){
            balance -= amount;
            cout<<"Withdrawal successful"<<endl;
        }
        else{
            cout<<"Insufficient balance"<<endl;
        }
    }
};

int main(){

    ATM atm;
    int choice;

    do{

        cout<<"\n--- ATM MENU ---"<<endl;
        cout<<"1. Check Balance"<<endl;
        cout<<"2. Deposit"<<endl;
        cout<<"3. Withdraw"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                atm.checkBalance();
                break;

            case 2:
                atm.deposit();
                break;

            case 3:
                atm.withdraw();
                break;
        }

    }while(choice != 4);

    return 0;
}