#include<iostream>
using namespace std;

int main(){
    double salary ,finalSalary;
    cout<<"Enter your salary = ";
    cin>>salary;

    finalSalary=salary-(salary*10.0/100);

    cout<<"salary after 10% tax = " <<finalSalary<<endl;

    return 0;
}