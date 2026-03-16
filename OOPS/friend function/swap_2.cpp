#include<iostream>
using namespace std;

class Swap{
    int a,b;

public:
    void setData(int x,int y){
        a = x;
        b = y;
    }

    void display(){
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }

    friend void swapData(Swap &s);
};

void swapData(Swap &s){
    int temp;
    temp = s.a;
    s.a = s.b;
    s.b = temp;
}

int main(){
    Swap s;

    s.setData(5,10);

    cout<<"Before Swap:"<<endl;
    s.display();

    swapData(s);

    cout<<"After Swap:"<<endl;
    s.display();
}