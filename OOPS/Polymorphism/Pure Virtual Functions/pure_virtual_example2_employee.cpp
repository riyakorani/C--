#include<iostream>
using namespace std;

class Employee{
public:
    virtual void salary() = 0;
};

class Manager : public Employee{
public:
    void salary(){
        cout<<"Manager Salary: 80000"<<endl;
    }
};

class Developer : public Employee{
public:
    void salary(){
        cout<<"Developer Salary: 60000"<<endl;
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