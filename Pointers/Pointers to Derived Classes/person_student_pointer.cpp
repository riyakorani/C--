#include<iostream>
using namespace std;

class Person{
public:
    int age;

    void display(){
        cout<<"Person age: "<<age<<endl;
    }
};

class Student : public Person{
public:
    int marks;

    void display(){
        cout<<"Person age: "<<age<<endl;
        cout<<"Student marks: "<<marks<<endl;
    }
};

int main(){

    Person *person_pointer;
    Person obj_person;
    Student obj_student;

    person_pointer = &obj_student;

    person_pointer->age = 20;
    person_pointer->display();

    Student *student_pointer;
    student_pointer = &obj_student;

    student_pointer->age = 20;
    student_pointer->marks = 95;
    student_pointer->display();

    return 0;
}