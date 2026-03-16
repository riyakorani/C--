#include<iostream>
using namespace std;

class Calculator{
public:
    int a,b;

    void setData(int x,int y){
        a=x;
        b=y;
    }

    void add(){
        cout<<"Addition = "<<a+b<<endl;
    }

    void sub(){
        cout<<"Subtraction = "<<a-b<<endl;
    }
};

int main(){
    Calculator c;

    c.setData(10,5);
    c.add();
    c.sub();
}