#include<iostream>
using namespace std;

class Patient{

    int id;
    string name;
    string disease;

public:

    void addPatient(){

        cout<<"Enter Patient ID: ";
        cin>>id;

        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Disease: ";
        cin>>disease;
    }

    void showPatient(){

        cout<<"Patient ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Disease: "<<disease<<endl;
    }
};

int main(){

    Patient p;

    p.addPatient();

    cout<<"\nPatient Details"<<endl;
    p.showPatient();

    return 0;
}