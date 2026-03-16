#include<iostream>
using namespace std;

class Employee{
    string name[50];
    int id[50];
    int counter;

public:
    void initEmployee(){ counter = 0; }
    void setData(void);
    void displayData(void);
};

void Employee::setData(){
    cout<<"Enter employee name "<<counter+1<<": ";
    cin>>name[counter];

    cout<<"Enter employee id: ";
    cin>>id[counter];

    counter++;
}

void Employee::displayData(){
    for(int i=0;i<counter;i++){
        cout<<"Employee Name: "<<name[i]
            <<"  ID: "<<id[i]<<endl;
    }
}

int main(){

    Employee E;

    E.initEmployee();

    E.setData();
    E.setData();
    E.setData();

    E.displayData();

}