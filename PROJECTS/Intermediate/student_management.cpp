#include<iostream>
using namespace std;

class Student{
    int roll;
    string name;
    float marks;

public:
    void input(){
        cout<<"Enter Roll No: ";
        cin>>roll;

        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Marks: ";
        cin>>marks;
    }

    void display(){
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main(){

    Student s;

    cout<<"Enter student details"<<endl;
    s.input();

    cout<<"\nStudent Information"<<endl;
    s.display();

    return 0;
}