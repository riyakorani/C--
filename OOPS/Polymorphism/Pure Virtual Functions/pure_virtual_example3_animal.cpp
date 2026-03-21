#include<iostream>
using namespace std;

class Animal{
public:
    virtual void sound() = 0;
};

class Dog : public Animal{
public:
    void sound(){
        cout<<"Dog barks"<<endl;
    }
};

class Cat : public Animal{
public:
    void sound(){
        cout<<"Cat meows"<<endl;
    }
};

int main(){

    Animal* a[2];

    Dog d;
    Cat c;

    a[0] = &d;
    a[1] = &c;

    a[0]->sound();
    a[1]->sound();

}