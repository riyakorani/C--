#include<iostream>
using namespace std;

class Student{
    private:
      int roll;
      int marks;
    
    public:
        
    void setData(){
        cout<<"Enter the roll number of the student = ";
        cin>>roll;

        cout<<"Enter the marks of the student = ";
        cin>>marks;
    }

    void display(){
        cout<<"Roll number = "<<roll<<endl;
        cout<<"Marks = "<<marks<<endl;
    }

};
int main(){
    Student S[3];

    for(int i=0;i<3;i++){
        S[i].setData();
    }

    for(int i=0;i<3;i++){
        S[i].display();
    }

    return 0;
}



