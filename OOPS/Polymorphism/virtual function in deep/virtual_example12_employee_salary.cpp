#include<iostream>
using namespace std;

class Employee{
protected:
    string name;

public:
    Employee(string n){
        name = n;
    }

    virtual void salary(){}
};

class Manager : public Employee{
    int sal;

public:
    Manager(string n,int s) : Employee(n){
        sal = s;
    }

    void salary(){
        cout<<"Manager: "<<name<<endl;
        cout<<"Salary: "<<sal<<endl;
    }
};

class Developer : public Employee{
    int sal;

public:
    Developer(string n,int s) : Employee(n){
        sal = s;
    }

    void salary(){
        cout<<"Developer: "<<name<<endl;
        cout<<"Salary: "<<sal<<endl;
    }
};

int main(){

    Employee* emp[2];

    Manager m("Riya",80000);
    Developer d("Rahul",60000);

    emp[0] = &m;
    emp[1] = &d;

    emp[0]->salary();
    emp[1]->salary();
}