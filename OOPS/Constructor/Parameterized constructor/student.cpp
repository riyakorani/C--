#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    // Parameterized constructor
    Student(int r, string n) {
        roll = r;
        name = n;
    }

    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1(101, "Ali");  // Passing arguments
    s1.display();

    return 0;
}