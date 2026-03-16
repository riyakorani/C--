#include<iostream>
using namespace std;

struct employee
{
    int eId;
    float salary;
};

int main(){

    employee emp[3];

    for(int i = 0; i < 3; i++){
        cout<<"Enter ID of employee "<<i+1<<" = ";
        cin>>emp[i].eId;

        cout<<"Enter salary of employee "<<i+1<<" = ";
        cin>>emp[i].salary;
    }

    cout<<endl;

    cout<<"Employee Details:"<<endl;

    for(int i = 0; i < 3; i++){
        cout<<"Employee "<<i+1<<" ID = "<<emp[i].eId<<endl;
        cout<<"Salary = "<<emp[i].salary<<endl;
    }

    return 0;
}