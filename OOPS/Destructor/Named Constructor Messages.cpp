#include<iostream>
using namespace std;

class Student{
public:
    Student(){
        cout<<"Student object created"<<endl;
    }

    ~Student(){
        cout<<"Student object destroyed"<<endl;
    }
};

int main(){

    Student s1;

    {
        Student s2;
        Student s3;
    }

    cout<<"End of main"<<endl;

    return 0;
}