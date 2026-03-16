#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:

    
    void setData(int l, int b){
        length = l;
        breadth = b;
    }

    // void getData(){
    //     cout<<"Enter length = "<<length<<endl;
    //     cout<<"Enter breadth = "<<breadth<<endl;
    // }

    void area(){
        cout<<"Area = "<<length * breadth<<endl;
    }

    void perimeter(){
        cout<<"Perimeter = "<<2 * (length + breadth)<<endl;
    }
};

int main(){
    Rectangle r;

    r.setData(10,5);

    r.area();
    r.perimeter();

    return 0;
}
