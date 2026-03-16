#include<iostream>
using namespace std;

class Point{
    int x,y;
    friend void midpoint(Point,Point);

public:
    Point(int a,int b){
        x = a;
        y = b;
    }
};

void midpoint(Point p1, Point p2){
    float mx,my;

    mx = (p1.x + p2.x)/2.0;
    my = (p1.y + p2.y)/2.0;

    cout<<"Midpoint = ("<<mx<<","<<my<<")"<<endl;
}

int main(){
    Point p1(2,4);
    Point p2(6,8);

    midpoint(p1,p2);

    return 0;
}