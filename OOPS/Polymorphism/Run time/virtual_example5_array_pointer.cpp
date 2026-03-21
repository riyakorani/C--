#include<iostream>
using namespace std;

class Employee{
public:
    virtual void salary(){
        cout<<"Employee salary"<<endl;
    }
};

class Manager : public Employee{
public:
    void salary(){
        cout<<"Manager salary = 50000"<<endl;
    }
};

class Developer : public Employee{
public:
    void salary(){
        cout<<"Developer salary = 40000"<<endl;
    }
};

int main(){

    Employee* emp[2];

    Manager m;
    Developer d;

    emp[0] = &m;
    emp[1] = &d;

    emp[0]->salary();
    emp[1]->salary();

}