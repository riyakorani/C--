#include<iostream>
using namespace std;

class Y;  // Forward declaration

class X{
    int data;

public:
    void setValue(int value){
        data = value;
    }

    void display(){
        cout<<"Value of X = "<<data<<endl;
    }

    friend void exchange(X &, Y &);
};

class Y{
    int num;

public:
    void setValue(int value){
        num = value;
    }

    void display(){
        cout<<"Value of Y = "<<num<<endl;
    }

    friend void exchange(X &, Y &);
};

void exchange(X &x, Y &y){
    int temp;

    temp = x.data;
    x.data = y.num;
    y.num = temp;
}

int main(){
    X x;
    Y y;

    x.setValue(34);
    y.setValue(67);

    cout<<"Before Swapping"<<endl;
    x.display();
    y.display();

    exchange(x,y);

    cout<<"After Swapping"<<endl;
    x.display();
    y.display();

    return 0;
}