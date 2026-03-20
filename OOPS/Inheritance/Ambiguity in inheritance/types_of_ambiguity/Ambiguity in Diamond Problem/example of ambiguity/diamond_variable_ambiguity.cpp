#include<iostream>
using namespace std;

class A{
public:
    int x;
};

class B : public A{

};

class C : public A{

};

class D : public B, public C{

};

int main(){

    D obj;

    // obj.x = 10;   // ❌ Ambiguity

    // cout<<obj.x;

    return 0;
}