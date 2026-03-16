#include<iostream>
using namespace std;

class Contact{
    string name;
    long phone;

public:
    void setContact(){
        cout<<"Enter name and phone: ";
        cin>>name>>phone;
    }

    void show(){
        cout<<name<<" : "<<phone<<endl;
    }
};

int main(){
    Contact c[3];

    for(int i=0;i<3;i++){
        c[i].setContact();
    }

    cout<<"\nContacts\n";

    for(int i=0;i<3;i++){
        c[i].show();
    }

    return 0;
}