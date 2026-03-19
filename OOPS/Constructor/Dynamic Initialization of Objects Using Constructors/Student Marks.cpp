#include<iostream>
using namespace std;

class Student{
    int marks;

public:
    Student(int m){
        marks = m;
    }

    void show(){
        cout<<"Marks are "<<marks<<endl;
    }
};

int main(){

    int m;

    cout<<"Enter marks: ";
    cin>>m;

    Student s1(m);   // Dynamic initialization

    s1.show();

    return 0;
}