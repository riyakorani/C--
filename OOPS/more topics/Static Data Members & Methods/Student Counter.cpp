#include<iostream>
using namespace std;

class Student
{
    int roll;
    static int count;

public:

    void setData(){
        cout<<"Enter roll number: ";
        cin>>roll;
        count++;
    }

    void getData(){
        cout<<"Student roll number is "<<roll
            <<" and this is student number "<<count<<endl;
    }

    static void getCount(){
        cout<<"Total students so far: "<<count<<endl;
    }
};

int Student::count;

int main(){

    Student Riya,Aman,Akshat;

    Riya.setData();
    Riya.getData();
    Student::getCount();

    Aman.setData();
    Aman.getData();
    Student::getCount();

    Akshat.setData();
    Akshat.getData();
    Student::getCount();

}