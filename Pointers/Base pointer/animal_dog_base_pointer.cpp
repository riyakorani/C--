#include<iostream>
using namespace std;

class Animal{
public:
    void speak(){
        cout<<"Animal makes sound"<<endl;
    }
};

class Dog : public Animal{
public:
    void speak(){
        cout<<"Dog barks"<<endl;
    }
};

int main(){

    Animal *ptr;
    Dog d;

    ptr = &d;

    ptr->speak();   // Base class function called

    return 0;
}