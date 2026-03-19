#include<iostream>
using namespace std;

class Test{
    int a;

public:
    Test(int x){
        a = x;
    }

    Test(Test &t){
        cout<<"Copy constructor invoked"<<endl;
        a = t.a;
    }

    void show(){
        cout<<a<<endl;
    }
};

int main(){

    Test t1(10);
    Test t2 = t1;   // Copy constructor

    t2.show();

}