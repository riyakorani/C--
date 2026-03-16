// Constructor in C++

// Definition-
// A constructor is a special member function of a class that is automatically called when an object of the class is created.
// It is mainly used to initialize the data members of a class.


// Characteristics of Constructor-
// 1) The name of the constructor must be the same as the class name.
// 2) It does not have any return type (not even void).
// 3) It is called automatically when an object is created.
// 4) It is usually declared in the public section of the class.
// 5) Constructors can be overloaded.


// Syntax-
// class ClassName
// {
// public:
//     ClassName()
//     {
//         // initialization
//     }
// };

// // Example of Constructor-
// #include <iostream>
// using namespace std;

// class Student
// {
// public:
//     int age;

//     Student()   // constructor
//     {
//         age = 18;
//     }
// };

// int main()
// {
//     Student s1;   // constructor called automatically
//     cout << s1.age;
// }

// Output-


// Types of Constructors in C++ -->
// 1. Default Constructor
// A constructor with no parameters is called a default constructor.

// // Example-
// #include <iostream>
// using namespace std;

// class Demo
// {
// public:
//     Demo()
//     {
//         cout << "Default constructor called";
//     }
// };

// int main()
// {
//     Demo d1;
// }
// 2. Parameterized Constructor-
// A constructor that takes arguments (parameters).

// // Example-
// #include <iostream>
// using namespace std;

// class Student
// {
// public:
//     int age;

//     Student(int a)
//     {
//         age = a;
//     }
// };

// int main()
// {
//     Student s1(20);
//     cout << s1.age;
// }

// // Output-
// 20


// 3. Copy Constructor-
// A constructor used to copy the data of one object to another object.

// // Syntax-
// ClassName(const ClassName &obj)
// {
// }

// // Example-
// #include <iostream>
// using namespace std;

// class Demo
// {
// public:
//     int x;

//     Demo(int a)
//     {
//         x = a;
//     }

//     Demo(const Demo &obj)
//     {
//         x = obj.x;
//     }
// };

// int main()
// {
//     Demo d1(10);
//     Demo d2 = d1;

//     cout << d2.x;
// }

// // Output-
// 10


// // Constructor Overloading-
// When multiple constructors are defined in the same class with different parameters, it is called constructor overloading.

// // Example-
// #include <iostream>
// using namespace std;

// class Test
// {
// public:
//     Test()
//     {
//         cout << "No parameter constructor\n";
//     }

//     Test(int x)
//     {
//         cout << "Parameterized constructor";
//     }
// };

// int main()
// {
//     Test t1;
//     Test t2(5);
// }


// // Destructor (Related Concept)-
// A destructor is a special member function that is automatically called when an object is destroyed.

// // Syntax-

// ClassName()
// {
// }

// // Example- 

// #include <iostream>
// using namespace std;

// class Demo
// {
// public:
//     ~Demo()
//     {
//         cout << "Destructor called";
//     }
// };

// int main()
// {
//     Demo d1;
// }


// Summary

// Constructor initializes objects.

// Called automatically during object creation.

// Types:

// Default Constructor

// Parameterized Constructor

// Copy Constructor

// Constructors can be overloaded.