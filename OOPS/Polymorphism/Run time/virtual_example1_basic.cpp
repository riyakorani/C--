#include<iostream>
using namespace std;

class Animal{
public:
    virtual void speak(){
        cout<<"Animal makes a sound"<<endl;
    }
};

class Dog : public Animal{
public:
    void speak(){
        cout<<"Dog barks"<<endl;
    }
};

int main(){
    Animal* ptr;
    Dog d;

    ptr = &d;
    ptr->speak();

    return 0;
}