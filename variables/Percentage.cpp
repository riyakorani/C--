#include<iostream>
using namespace std;

int main(){
    int EEE,BEEE,DSA,OOPM,DBMS;
    int totalMarks; 
    float avg;
    float Percentage;

    cout<<"Enter your marks in EEE = ";
    cin>>EEE;

    cout<<"Enter your marks in BEEE = ";
    cin>>BEEE;

    cout<<"Enter your marks in DSA = ";
    cin>>DSA;

    cout<<"Enter your marks in OOPM = ";
    cin>>OOPM;

    cout<<"Enter your marks in DBMS = ";
    cin>>DBMS;

    totalMarks=EEE+BEEE+DSA+OOPM+DBMS;
    avg=(totalMarks)/5.0;
    Percentage=float(totalMarks)/500*100;

    cout<<"Your total marks are = "<<totalMarks<<endl;
    cout<<"Your Percentages are = "<<Percentage<<" % "<<endl;


    return 0;
}