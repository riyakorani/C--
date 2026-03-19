#include<iostream>
using namespace std;

class Sample{
    int x;

public:
    Sample(int a){
        x = a;
    }

    Sample(Sample &s){
        cout<<"Copy constructor called"<<endl;
        x = s.x;
    }

    void display(){
        cout<<"x = "<<x<<endl;
    }
};

int main(){
    Sample s1(50);
    Sample s2(10);

    s2 = s1;

    s1.display();
    s2.display();

    return 0;
}