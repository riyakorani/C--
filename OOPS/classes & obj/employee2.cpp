#include<iostream>
using namespace std;

class Employee
{
private:
    int id;
    int salary;

public:
    string name;

    void setData(int i, int s){
        id = i;
        salary = s;
    }

    void getData(){
        cout<<"Name = "<<name<<endl;
        cout<<"ID = "<<id<<endl;
        cout<<"Salary = "<<salary<<endl;
    }
};

int main(){
    Employee e1;

    e1.name = "Riya";
    e1.setData(101,50000);

    e1.getData();

    return 0;
}
