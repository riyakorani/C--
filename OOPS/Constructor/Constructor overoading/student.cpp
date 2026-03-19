#include<iostream>
using namespace std;

class Student{
    int roll;
    int marks;

public:
    Student(){
        roll = 0;
        marks = 0;
    }

    Student(int r){
        roll = r;
        marks = 0;
    }

    Student(int r,int m){
        roll = r;
        marks = m;
    }

    void display(){
        cout<<"Roll = "<<roll<<" Marks = "<<marks<<endl;
    }
};

int main(){
    Student s1;
    Student s2(21);
    Student s3(22,95);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}