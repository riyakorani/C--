#include<iostream>
using namespace std;

class Student{
    private:
      int marks;

    public:
        void input();
        void result();
};

void Student :: input(){
    cout<<"Enter your marks = ";
    cin>>marks;

    result();
}

void Student :: result(){
    if(marks>=40){
        cout<<"Pass";
    } else{
        cout<<"Fail";
    }
}
int main(){
    Student S;

    S.input();

    return 0;
}



// #include <iostream>
// using namespace std;

// class Rectangle {
// private:
//     int l, b;

// public:
//     void setData() {
//         cout << "Enter length and breadth: ";
//         cin >> l >> b;
//     }

//     void area() const {
//         cout << "Area = " << l * b << endl;
//     }

//     void perimeter() const {
//         cout << "Perimeter = " << 2 * (l + b) << endl;
//     }

//     void display() {
//         area();        // 🔥 nesting here (clean control flow)
//         perimeter();
//     }
// };

// int main() {
//     Rectangle r;

//     r.setData();
//     r.display();   // better design than calling inside setter
// }