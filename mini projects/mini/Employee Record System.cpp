#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;

public:
    void setData(){
        cout<<"Enter employee id: ";
        cin>>id;

        cout<<"Enter salary: ";
        cin>>salary;
    }

    void display(){
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){
    Employee e;

    e.setData();
    e.display();

    return 0;
}
