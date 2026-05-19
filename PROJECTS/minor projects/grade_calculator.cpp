#include<iostream>
using namespace std;

int main(){

    int m1,m2,m3;
    float percentage;

    cout<<"Enter marks of 3 subjects:"<<endl;

    cin>>m1>>m2>>m3;

    percentage = (m1+m2+m3)/3.0;

    cout<<"Percentage: "<<percentage<<endl;

    if(percentage >= 90)
        cout<<"Grade: A";

    else if(percentage >= 75)
        cout<<"Grade: B";

    else if(percentage >= 50)
        cout<<"Grade: C";

    else
        cout<<"Grade: Fail";

    return 0;
}