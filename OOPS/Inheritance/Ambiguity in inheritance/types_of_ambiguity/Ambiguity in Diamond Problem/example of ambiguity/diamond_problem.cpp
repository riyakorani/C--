#include<iostream>
using namespace std;

class Student{
public:
    int roll;

    void setRoll(int r){
        roll = r;
    }

    void displayRoll(){
        cout<<"Roll number: "<<roll<<endl;
    }
};

class Test : public Student{
public:
    int marks;

    void setMarks(int m){
        marks = m;
    }
};

class Sports : public Student{
public:
    int score;

    void setScore(int s){
        score = s;
    }
};

class Result : public Test, public Sports{
public:
    void display(){
        cout<<"Marks: "<<marks<<endl;
        cout<<"Score: "<<score<<endl;
    }
};

int main(){

    Result r;

    // r.setRoll(10);   // ❌ Ambiguity occurs here
    r.setMarks(85);
    r.setScore(9);

    r.display();

    return 0;
}