#include<iostream>
using namespace std;

class Student{
    int roll;
    float marks;

public:
    void setData(int r,float m){
        roll = r;
        marks = m;
    }

    void getData(){
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main(){

    Student *ptr = new Student;

    ptr->setData(101, 89.5);
    ptr->getData();

    delete ptr;

    return 0;
}