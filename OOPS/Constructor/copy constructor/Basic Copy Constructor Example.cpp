#include<iostream>
using namespace std;

class Number{
    int a;

public:
    Number(int num){
        a = num;
    }

    // Copy Constructor
    Number(Number &obj){
        cout<<"Copy constructor called"<<endl;
        a = obj.a;
    }

    void display(){
        cout<<"The number is "<<a<<endl;
    }
};

int main(){
    Number n1(5);
    Number n2(n1);   // Copy constructor called

    n1.display();
    n2.display();

    return 0;
}