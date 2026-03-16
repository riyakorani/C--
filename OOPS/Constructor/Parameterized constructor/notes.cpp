
//  🔹Defination-
// parameterized constructor is a constructor that takes one or more parameters.
// It allows you to initialize an object with specific values at the time of creation.

// 🔹 Why use a parameterized constructor?
// It helps:
// Initialize data members with user-defined values
// Avoid setting values separately after object creation
// Improve code safety and clarity


// 🔹 Syntax
// class ClassName {
//     data_type variable;

// public:
//     ClassName(parameter_list) {
//         // initialization
//     }
// };


// 🔹 Example
// #include <iostream>
// using namespace std;

// class Student {
//     int roll;
//     string name;

// public:
//     // Parameterized constructor
//     Student(int r, string n) {
//         roll = r;
//         name = n;
//     }

//     void display() {
//         cout << "Roll: " << roll << endl;
//         cout << "Name: " << name << endl;
//     }
// };

// int main() {
//     Student s1(101, "Ali");  // Passing arguments
//     s1.display();

//     return 0;
// }
// 🔹 Output:
// Roll: 101
// Name: Ali


// 🔹 Using Initialization List (Recommended Way)
// Student(int r, string n) : roll(r), name(n) {}

// This method is:
// More efficient
// Required for const and reference members


// 🔹 Key Points
// Constructor name must be same as class name
// Automatically called when object is created
// Can overload constructors (multiple constructors with different parameters)