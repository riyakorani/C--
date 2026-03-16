#include<iostream>
using namespace std;

struct employee
{
    int eId;
    char favChar;
    float salary;
};

int main() {

    employee harry;

    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;

    cout<<"Employee ID = "<<harry.eId<<endl;
    cout<<"Favourite Character = "<<harry.favChar<<endl;
    cout<<"Salary = "<<harry.salary<<endl;

    return 0;
}