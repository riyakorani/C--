#include<iostream>
using namespace std;

class A{
    int value;

public:
    void setValue(int v){
        value = v;
    }

    void show(){
        cout<<"Value: "<<value<<endl;
    }

    void call(A obj){
        cout<<"Inside call function"<<endl;
        obj.show();
    }

    void pass(){
        call(*this);
    }
};

int main(){

    A a;
    a.setValue(50);
    a.pass();

    return 0;
}