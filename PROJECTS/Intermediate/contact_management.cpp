#include<iostream>
using namespace std;

class Contact{
    string name;
    string phone;

public:

    void addContact(){
        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Phone: ";
        cin>>phone;
    }

    void showContact(){
        cout<<"Name: "<<name<<endl;
        cout<<"Phone: "<<phone<<endl;
    }
};

int main(){

    Contact c;

    c.addContact();

    cout<<"\nContact Details"<<endl;
    c.showContact();

    return 0;
}