#include<iostream>
using namespace std;

class Rectangle{
    int length, width;

public:
    void setData(int l,int w){
        length = l;
        width = w;
    }

    void display(){
        cout<<"length = "<<length<<endl;
        cout<<"width = "<<width<<endl;
    }

    friend void area(Rectangle r);
};

void area(Rectangle r){
    cout<<"Area = "<<r.length * r.width;
}

int main(){
    Rectangle r;

    r.setData(10,5);
    r.display();
    
    area(r);
    
}