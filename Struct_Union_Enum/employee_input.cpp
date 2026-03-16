#include<iostream>
using namespace std;

struct employee
{
    char name[50];
    int eId;
    float salary;
};

int main(){

    employee emp;

    cout<<"Enter employee name = ";
    cin>>emp.name;

    cout<<"Enter employee salary = ";
    cin>>emp.salary;

    cout<<"Enter employee ID = ";
    cin>>emp.eId;

    cout<<endl;

    cout<<"Employee Name = "<<emp.name<<endl;
    cout<<"Employee Salary = "<<emp.salary<<endl;
    cout<<"Employee ID = "<<emp.eId<<endl;

    return 0;
}