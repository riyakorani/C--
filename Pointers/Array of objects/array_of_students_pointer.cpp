#include<iostream>
using namespace std;

class Student{
    int roll;
    int marks;

public:
    void setData(int r,int m){
        roll = r;
        marks = m;
    }

    void getData(){
        cout<<"Roll: "<<roll<<" Marks: "<<marks<<endl;
    }
};

int main(){

    int size = 3;

    Student *ptr = new Student[size];

    for(int i=0;i<size;i++){
        ptr[i].setData(100+i,80+i);
    }

    for(int i=0;i<size;i++){
        ptr[i].getData();
    }

    delete[] ptr;

    return 0;
}