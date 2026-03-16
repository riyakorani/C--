#include<iostream>
using namespace std;

class Student;

class Teacher{
public:
    void showMarks(Student);
};

class Student{
    int marks;

    // declaring entire class as friend
    friend class Teacher;

public:
    void setMarks(int m){
        marks = m;
    }
};

void Teacher::showMarks(Student s){
    cout<<"Student marks are "<<s.marks<<endl;
}

int main(){
    Student s;
    s.setMarks(95);

    Teacher t;
    t.showMarks(s);

    return 0;
}