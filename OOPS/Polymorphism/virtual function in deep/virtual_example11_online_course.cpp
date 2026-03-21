#include<iostream>
using namespace std;

class Course{
protected:
    string name;
    float rating;

public:
    Course(string n, float r){
        name = n;
        rating = r;
    }

    virtual void display(){}
};

class VideoCourse : public Course{
    float duration;

public:
    VideoCourse(string n, float r, float d) : Course(n,r){
        duration = d;
    }

    void display(){
        cout<<"Course name: "<<name<<endl;
        cout<<"Rating: "<<rating<<endl;
        cout<<"Video Duration: "<<duration<<" hours"<<endl;
    }
};

class TextCourse : public Course{
    int pages;

public:
    TextCourse(string n, float r, int p) : Course(n,r){
        pages = p;
    }

    void display(){
        cout<<"Course name: "<<name<<endl;
        cout<<"Rating: "<<rating<<endl;
        cout<<"Pages: "<<pages<<endl;
    }
};

int main(){

    Course* ptr[2];

    VideoCourse v("C++ Masterclass",4.8,10.5);
    TextCourse t("Python Notes",4.5,250);

    ptr[0] = &v;
    ptr[1] = &t;

    ptr[0]->display();
    ptr[1]->display();
}