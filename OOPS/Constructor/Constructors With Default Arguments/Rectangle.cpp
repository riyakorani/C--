#include<iostream>
using namespace std;

class Rectangle{
    int length, width;

public:
    Rectangle(int l=5, int w=4){
        length = l;
        width = w;
    }

    void area(){
        cout<<"Area = "<<length * width<<endl;
    }
};

int main(){
    Rectangle r1;
    Rectangle r2(10);
    Rectangle r3(10,6);

    r1.area();
    r2.area();
    r3.area();

    return 0;
}