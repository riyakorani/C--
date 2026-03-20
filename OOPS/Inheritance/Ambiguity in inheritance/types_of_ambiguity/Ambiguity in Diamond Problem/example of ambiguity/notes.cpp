// 3️⃣ Ambiguity in Diamond Problem--->
// This is a famous inheritance problem.

// Structure:--
    //   A
    //  / \
    // B   C
    //  \ /
    //   D

// Class D receives A twice → causes ambiguity.

// Example:--
#include<iostream>
using namespace std;

class A{
public:
    void show(){
        cout<<"Class A"<<endl;
    }
};

class B : public A{
};

class C : public A{
};

class D : public B, public C{
};

int main(){

    D obj;
    // obj.show();  ❌ Ambiguity

    obj.B::show();
    obj.C::show();

}