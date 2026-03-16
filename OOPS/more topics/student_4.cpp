#include<iostream>
using namespace std;

class Student
{
    int roll;
    static int totalStudents;

public:
    void setData(void){
        cout<<"Enter your roll no = ";
        cin>>roll;

        totalStudents++;
    }

    void getData(void){
        cout<<"Your roll no is "<<roll<<endl;
        cout<<"Total no of students are "<<totalStudents<<endl;
    }

    static void getTotalStudents(void){
        cout<<"Total students = "<<totalStudents<<endl;
    }
};

int Student::totalStudents = 0;

int main(){
    Student harry, rohan, lovish, riya;

    harry.setData();
    harry.getData();
    Student::getTotalStudents();

    rohan.setData();
    rohan.getData();
    Student::getTotalStudents();

    lovish.setData();
    lovish.getData();
    Student::getTotalStudents();

    riya.setData();
    riya.getData();
    Student::getTotalStudents();

    return 0;
}
