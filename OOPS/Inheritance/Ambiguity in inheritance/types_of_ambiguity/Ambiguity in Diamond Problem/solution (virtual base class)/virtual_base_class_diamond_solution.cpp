#include<iostream>
using namespace std;

class Student{
public:
    int roll;

    void setRoll(int r){
        roll = r;
    }
};

class Test : virtual public Student{
public:
    int marks;
};

class Sports : virtual public Student{
public:
    int score;
};

class Result : public Test, public Sports{
public:
    void display(){
        cout<<"Roll: "<<roll<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"Score: "<<score<<endl;
    }
};

int main(){

    Result r;

    r.setRoll(101);
    r.marks = 85;
    r.score = 9;

    r.display();

    return 0;
}