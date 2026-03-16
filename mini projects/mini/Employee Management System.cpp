#include<iostream>
using namespace std;

class Employee{
    int id;
    string name;
    int salary;

public:
    void setData(){
        cout<<"Enter id name salary: ";
        cin>>id>>name>>salary;
    }

    void display(){
        cout<<"ID: "<<id<<" Name: "<<name<<" Salary: "<<salary<<endl;
    }
};

int main(){
    Employee emp[3];

    for(int i=0;i<3;i++){
        emp[i].setData();
    }

    cout<<"\nEmployee Details\n";

    for(int i=0;i<3;i++){
        emp[i].display();
    }

    return 0;
}