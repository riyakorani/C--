#include<iostream>
using namespace std;

void display(int id){
    cout << "ID: " << id << endl;
}

void display(int id, string name){
    cout << "ID: " << id << ", Name: " << name << endl;
}

void display(int id, string name, int age){
    cout << "ID: " << id << ", Name: " << name << ", Age: " << age << endl;
}

int main(){
    display(101);
    display(102, "Riya");
    display(103, "Aman", 20);

    return 0;
}