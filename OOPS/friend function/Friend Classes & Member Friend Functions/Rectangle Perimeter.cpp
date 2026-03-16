#include<iostream>
using namespace std;

class Rectangle;

class Calculate{
public:
    void perimeter(Rectangle);
};

class Rectangle{
    int length,width;

    friend class Calculate;

public:
    void setData(int l,int w){
        length = l;
        width = w;
    }
};

void Calculate::perimeter(Rectangle r){
    cout<<"Perimeter = "<<2*(r.length+r.width);
}

int main(){
    Rectangle r;
    Calculate calc;

    r.setData(10,5);

    calc.perimeter(r);

    return 0;
}