#include<iostream>
using namespace std;

class A{
public:
    int x;

    void setX(int a){
        x = a;
    }
};

class B : virtual public A{

};

class C : virtual public A{

};

class D : public B, public C{

};

int main(){

    D obj;

    obj.setX(10);
    cout<<"Value of x: "<<obj.x<<endl;

    return 0;
}