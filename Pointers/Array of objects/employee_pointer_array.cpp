#include<iostream>
using namespace std;

class Employee{
    int id;
    float salary;

public:
    void setData(int i,float s){
        id = i;
        salary = s;
    }

    void getData(){
        cout<<"Employee ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){

    Employee *emp = new Employee[2];

    emp[0].setData(1,50000);
    emp[1].setData(2,60000);

    emp[0].getData();
    emp[1].getData();

    delete[] emp;

    return 0;
}