#include<iostream>
using namespace std;

class Bank
{
    int accNo;
    static int count;

public:

    void setData(){
        cout<<"Enter account number: ";
        cin>>accNo;
        count++;
    }

    void getData(){
        cout<<"Account number: "<<accNo
            <<" and this is account number "<<count<<endl;
    }

    static void getCount(){
        cout<<"Total bank accounts: "<<count<<endl;
    }
};

int Bank::count;

int main(){

    Bank b1, b2, b3;

    b1.setData();
    b1.getData();
    Bank::getCount();

    b2.setData();
    b2.getData();
    Bank::getCount();

    b3.setData();
    b3.getData();
    Bank::getCount();

}