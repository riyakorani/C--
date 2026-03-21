#include<iostream>
using namespace std;

class Employee{
protected:
    string name;

public:
    Employee(string n){
        name = n;
    }

    virtual void showSalary() = 0;
};

class Manager : public Employee{
    int salary;

public:
    Manager(string n,int s): Employee(n){
        salary = s;
    }

    void showSalary(){
        cout<<"Manager "<<name<<" salary "<<salary<<endl;
    }
};

class Developer : public Employee{
    int salary;

public:
    Developer(string n,int s): Employee(n){
        salary = s;
    }

    void showSalary(){
        cout<<"Developer "<<name<<" salary "<<salary<<endl;
    }
};

int main(){

    Employee* emp[2];

    Manager m("Riya",80000);
    Developer d("Rahul",60000);

    emp[0] = &m;
    emp[1] = &d;

    emp[0]->showSalary();
    emp[1]->showSalary();
}