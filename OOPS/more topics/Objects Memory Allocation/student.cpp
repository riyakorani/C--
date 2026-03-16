#include<iostream>
using namespace std;

class Student {

private:
    string name[50];
    int roll[50];
    int counter;

public:
    void initStudent(){
        counter = 0;
    }

    void setData();
    void displayData();
};

void Student :: setData(){

    cout<<"Enter name of student "<<counter+1<<": ";
    cin>>name[counter];

    cout<<"Enter roll number: ";
    cin>>roll[counter];

    counter++;
}

void Student :: displayData(){

    for(int i=0;i<counter;i++){
        cout<<"Student Name: "<<name[i]
            <<"  Roll Number: "<<roll[i]<<endl;
    }
}

int main(){

    Student S;

    S.initStudent();

    S.setData();
    S.setData();
    S.setData();

    S.displayData();

    return 0;
}