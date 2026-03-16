#include<iostream>
using namespace std;

struct employee
{
    int id;
    float salary;
};

int main(){

    employee emp[3];
    int maxIndex = 0;

    for(int i=0;i<3;i++){
        cout<<"Enter ID = ";
        cin>>emp[i].id;

        cout<<"Enter salary = ";
        cin>>emp[i].salary;
    }

    for(int i=1;i<3;i++){
        if(emp[i].salary > emp[maxIndex].salary){
            maxIndex = i;
        }
    }

    cout<<endl;

    cout<<"Employee with highest salary:"<<endl;
    cout<<"ID = "<<emp[maxIndex].id<<endl;
    cout<<"Salary = "<<emp[maxIndex].salary<<endl;

    return 0;
}