#include<iostream>
using namespace std;

int main(){

    enum Meal{breakfast, lunch, dinner};

    cout<<"Breakfast = "<<breakfast<<endl;
    cout<<"Lunch = "<<lunch<<endl;
    cout<<"Dinner = "<<dinner<<endl;

    Meal m1 = lunch;

    cout<<"Selected meal value = "<<m1<<endl;

    return 0;
}