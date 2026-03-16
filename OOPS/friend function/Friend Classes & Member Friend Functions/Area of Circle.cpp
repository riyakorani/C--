#include<iostream>
using namespace std;

class Circle;

class Calculate{
public:
    float area(Circle);
};

class Circle{
    int radius;

    friend float Calculate::area(Circle);

public:
    void setRadius(int r){
        radius = r;
    }
};

float Calculate::area(Circle c){
    return 3.14 * c.radius * c.radius;
}

int main(){
    Circle c;
    Calculate calc;

    c.setRadius(5);

    cout<<"Area = "<<calc.area(c);

    return 0;
}