#include<iostream>
using namespace std;

int area(int side){
    return side * side;
}

int area(int length, int width){
    return length * width;
}

double area(double radius){
    return 3.14 * radius * radius;
}

int main(){

    cout<<"Area of square = "<<area(4)<<endl;

    cout<<"Area of rectangle = "<<area(4,5)<<endl;

    cout<<"Area of circle = "<<area(3.0)<<endl;

    return 0;
}