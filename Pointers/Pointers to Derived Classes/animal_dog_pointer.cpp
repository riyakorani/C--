#include<iostream>
using namespace std;

class Animal{
public:
    int age;

    void display(){
        cout<<"Animal age: "<<age<<endl;
    }
};

class Dog : public Animal{
public:
    int weight;

    void display(){
        cout<<"Animal age: "<<age<<endl;
        cout<<"Dog weight: "<<weight<<endl;
    }
};

int main(){

    Animal *animal_pointer;
    Animal obj_animal;
    Dog obj_dog;

    animal_pointer = &obj_dog;

    animal_pointer->age = 5;
    animal_pointer->display();

    Dog *dog_pointer;
    dog_pointer = &obj_dog;

    dog_pointer->age = 5;
    dog_pointer->weight = 20;
    dog_pointer->display();

    return 0;
}