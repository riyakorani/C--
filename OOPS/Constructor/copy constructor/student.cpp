#include<iostream>
using namespace std;

class Student{
    int id;

public:
    Student(int x){
        id = x;
    }

    Student(Student &s){
        id = s.id;
    }

    void display(){
        cout<<"Student ID: "<<id<<endl;
    }
};

int main(){

    Student s1(101);
    Student s2(s1);   // Copy constructor

    s1.display();
    s2.display();

    return 0;
}