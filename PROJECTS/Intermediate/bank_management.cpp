#include<iostream>
using namespace std;

class Bank{
    int acc_no;
    string name;
    float balance;

public:

    void createAccount(){
        cout<<"Enter Account Number: ";
        cin>>acc_no;

        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Balance: ";
        cin>>balance;
    }

    void display(){
        cout<<"Account Number: "<<acc_no<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

int main(){

    Bank b;

    b.createAccount();

    cout<<"\nAccount Details"<<endl;
    b.display();

    return 0;
}