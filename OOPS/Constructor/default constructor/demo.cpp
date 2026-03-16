#include<iostream>
using namespace std;

class Demo {
    int x;

 public:
     Demo()  // Default Constructor
     {
        x = 5;
     }
    
     void display(){
        cout<<"The value of x is = "<<x<<endl;
     }
};

int main(){
    Demo d1;

    d1.display();

    return 0;
}