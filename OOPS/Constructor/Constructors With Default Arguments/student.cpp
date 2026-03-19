#include<iostream>
using namespace std;

class Student{
    int roll;
    int marks;

public:
    Student(int r=1, int m=50){
        roll = r;
        marks = m;
    }

    void display(){
        cout<<"Roll = "<<roll<<" Marks = "<<marks<<endl;
    }
};

int main(){
    Student s1;
    Student s2(10);
    Student s3(12,90);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}