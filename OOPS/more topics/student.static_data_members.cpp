#include<iostream>
using namespace std;

class Student
{
    int roll;
    static int totalStudents;

public:

    void setData()
    {
        cout<<"Enter your roll no = ";
        cin>>roll;

        totalStudents++;
    }

    void getData()
    {
        cout<<"The roll no of the student is "
            <<roll
            <<" and the total number of students are "
            <<totalStudents<<endl;
    }

    static void getTotalStudents()
    {
        cout<<"Total students = "<<totalStudents<<endl;
    }
};

int Student::totalStudents = 0;

int main()
{
    Student harry, rohan, lovish;

    harry.setData();
    harry.getData();
    Student::getTotalStudents();

    rohan.setData();
    rohan.getData();
    Student::getTotalStudents();

    lovish.setData();
    lovish.getData();
    Student::getTotalStudents();

    return 0;
}
