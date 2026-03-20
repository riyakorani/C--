#include<iostream>
using namespace std;

class A{
public:
    int num;
};

class B : public A{

};

class C : public A{

};

class D : public B, public C{

};

int main(){

    D obj;

    obj.B::num = 5;
    obj.C::num = 10;

    cout<<"From B: "<<obj.B::num<<endl;
    cout<<"From C: "<<obj.C::num<<endl;

    return 0;
}