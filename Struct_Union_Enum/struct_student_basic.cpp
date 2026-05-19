#include<iostream>
using namespace std;

 struct student
 {
    int id;
    float marks;
 };
 

int main(){
    struct student Aman;
    struct student Riya;
    struct student Akshat;
    struct student Abeer;
    
    Aman.id = 50;
    Aman.marks = 678;

    Riya.id = 263;
    Riya.marks = 978;

    Akshat.id = 48;
    Akshat.marks = 578;

    Abeer.id = 46;
    Abeer.marks = 478;

    cout<<"Aman's id = "<<Aman.id;
    cout<<"Aman's marks = "<<Aman.marks;

    cout<<"Riya's id = "<<Riya.id;
    cout<<"Riya's marks = "<<Riya.marks;

    cout<<"Akshat's id = "<<Akshat.id;
    cout<<"Akshat's marks = "<<Akshat.marks;

    cout<<"Abeer's id = "<<Abeer.id;
    cout<<"Abeer's marks = "<<Abeer.marks;
    
    return 0;
}


#include<iostream>
using namespace std;

struct Student{
    string name;
    int id;
    float marks;
};

int main(){
    
    Student s[4];

    // Input
    for(int i = 0; i < 4; i++){
        cout << "Enter student's name " << i+1 << " = ";
        cin >> s[i].name;

        cout << "Enter student's id " << i+1 << " = ";
        cin >> s[i].id;

        cout << "Enter student's marks " << i+1 << " = ";
        cin >> s[i].marks;
    }

    cout << "\n--- Student Details ---\n";

    // Output
    for(int i = 0; i < 4; i++){
        cout << "Student " << i+1 << endl;
        cout << "Name = " << s[i].name << endl;
        cout << "ID = " << s[i].id << endl;
        cout << "Marks = " << s[i].marks << endl;
        cout << endl;
    }

    return 0;
}





