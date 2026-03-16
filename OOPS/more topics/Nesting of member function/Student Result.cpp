#include<iostream>
using namespace std;

class Student{
    private:
      int marks;

    public:
        void input();
        void result();
};

void Student :: input(){
    cout<<"Enter your marks = ";
    cin>>marks;

    result();
}

void Student :: result(){
    if(marks>=40){
        cout<<"Pass";
    } else{
        cout<<"Fail";
    }
}
int main(){
    Student S;

    S.input();

    return 0;
}