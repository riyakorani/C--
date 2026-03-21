#include<iostream>
using namespace std;

class Person{
public:
    string name;

    void display(){
        cout<<"Name: "<<name<<endl;
    }
};

class Student : public Person{
public:
    int marks;

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main(){

    Person *ptr;
    Student s;

    ptr = &s;

    ptr->name = "Riya";
    ptr->display();

    return 0;
}