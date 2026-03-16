#include <iostream>
using namespace std;

class Student
{
public:
    int age;

    Student()   // constructor
    {
        age = 18;
    }
};

int main()
{
    Student s1;   // constructor called automatically
    cout << s1.age;
}