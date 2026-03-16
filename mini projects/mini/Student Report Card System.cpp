#include<iostream>
using namespace std;

class Student{
    string name;
    int roll;
    int m1,m2,m3,total;
    float percentage;

public:
    void setData(){
        cout<<"Enter name: ";
        cin>>name;

        cout<<"Enter roll: ";
        cin>>roll;

        cout<<"Enter marks of 3 subjects: ";
        cin>>m1>>m2>>m3;
    }

    void calculate(){
        total = m1+m2+m3;
        percentage = total/3.0;
    }

    void display(){
        cout<<"\nName: "<<name;
        cout<<"\nRoll: "<<roll;
        cout<<"\nTotal: "<<total;
        cout<<"\nPercentage: "<<percentage<<"%\n";
    }
};

int main(){
    Student s;

    s.setData();
    s.calculate();
    s.display();

    return 0;
}