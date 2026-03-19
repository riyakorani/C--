#include<iostream>
using namespace std;

class Rectangle{
    int length, width;

public:
    Rectangle(int l, int w){
        length = l;
        width = w;
    }

    void area(){
        cout<<"Area = "<<length*width<<endl;
    }
};

int main(){

    int l,w;

    cout<<"Enter length and width: ";
    cin>>l>>w;

    Rectangle r(l,w);   // Dynamic initialization

    r.area();

    return 0;
}