// ⃣ Student Database System 

#include<iostream>
using namespace std;

class Student{
    int roll;
    string name;
    int marks;

public:
    void setData(){
        cout<<"Enter roll name marks: ";
        cin>>roll>>name>>marks;
    }

    void display(){
        cout<<"Roll: "<<roll
            <<" Name: "<<name
            <<" Marks: "<<marks<<endl;
    }
};

int main(){
    Student s[5];

    cout<<"Enter student details\n";

    for(int i=0;i<5;i++){
        s[i].setData();
    }

    cout<<"\nStudent List\n";

    for(int i=0;i<5;i++){
        s[i].display();
    }

    return 0;
}
