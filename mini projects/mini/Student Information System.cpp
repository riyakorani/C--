#include<iostream>
using namespace std;

class Student{
    int roll;
    string name;

public:
    void setData(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll: ";
        cin>>roll;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
    }
};

int main(){
    Student s1;

    s1.setData();
    s1.display();

    return 0;
}
