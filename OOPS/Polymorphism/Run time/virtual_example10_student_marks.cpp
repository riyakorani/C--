#include<iostream>
using namespace std;

class Student{
public:
    virtual void result(){
        cout<<"Student result"<<endl;
    }
};

class Engineering : public Student{
public:
    void result(){
        cout<<"Engineering student result declared"<<endl;
    }
};

class Medical : public Student{
public:
    void result(){
        cout<<"Medical student result declared"<<endl;
    }
};

int main(){

    Student* s;

    Engineering e;
    Medical m;

    s = &e;
    s->result();

    s = &m;
    s->result();

    return 0;
}