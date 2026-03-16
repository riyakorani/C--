#include<iostream>
using namespace std;

struct employee
{
    int eId;
    float salary;
};

int main(){
   employee e1;

   cout<<"Enter your ID = ";
   cin>>e1.eId;

   cout<<"Enter Salary = ";
   cin>>e1.salary;

   cout<<"Employee ID = "<<e1.eId<<endl;
   cout<<"Salary = "<<e1.salary<<endl;

   return 0;
}