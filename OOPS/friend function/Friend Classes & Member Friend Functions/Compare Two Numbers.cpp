#include<iostream>
using namespace std;

class Number;

class Checker{
public:
    int findMax(Number, Number);
};

class Number{
    int a;

    friend int Checker::findMax(Number, Number);

public:
    void setData(int n){
        a = n;
    }
};

int Checker::findMax(Number n1, Number n2){
    if(n1.a > n2.a)
        return n1.a;
    else
        return n2.a;
}

int main(){
    Number x, y;

    x.setData(45);
    y.setData(30);

    Checker c;

    cout<<"Maximum number is "<<c.findMax(x,y);

    return 0;
}