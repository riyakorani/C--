#include<iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;

union money
{
    int rice;
    char car;
    float pounds;
};

int main(){

    // STRUCT
    ep harry;
    harry.eId = 1;
    harry.favChar = 'C';
    harry.salary = 50000;

    cout<<"Employee ID: "<<harry.eId<<endl;
    cout<<"Fav char: "<<harry.favChar<<endl;
    cout<<"Salary: "<<harry.salary<<endl;

    cout<<endl;

    // UNION
    union money m1;
    m1.rice = 34;
    cout<<"Rice = "<<m1.rice<<endl;

    cout<<endl;

    // ENUM
    enum Meal{breakfast, lunch, dinner};

    Meal m1_meal = lunch;

    cout<<"Enum value = "<<m1_meal<<endl;

    return 0;
}