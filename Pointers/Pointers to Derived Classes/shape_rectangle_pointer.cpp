#include<iostream>
using namespace std;

class Shape{
public:
    int length;

    void display(){
        cout<<"Length: "<<length<<endl;
    }
};

class Rectangle : public Shape{
public:
    int width;

    void display(){
        cout<<"Length: "<<length<<endl;
        cout<<"Width: "<<width<<endl;
    }
};

int main(){

    Shape *shape_pointer;
    Shape obj_shape;
    Rectangle obj_rectangle;

    shape_pointer = &obj_rectangle;

    shape_pointer->length = 10;
    shape_pointer->display();

    Rectangle *rect_pointer;
    rect_pointer = &obj_rectangle;

    rect_pointer->length = 10;
    rect_pointer->width = 5;
    rect_pointer->display();

    return 0;
}