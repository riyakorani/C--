#include<iostream>
using namespace std;

class Student
{
    int id;

public:
    Student()   // Default Constructor
    {
        id = 101;
    }

    void display()
    {
        cout << "Student ID: " << id << endl;
    }
};

int main()
{
    Student s1;
    s1.display();

    return 0;
}