#include<iostream>
using namespace std;

class Box{
    int l,b,h;

public:
    Box(int x=1, int y=1, int z=1){
        l = x;
        b = y;
        h = z;
    }

    void volume(){
        cout<<"Volume = "<<l*b*h<<endl;
    }
};

int main(){
    Box b1;
    Box b2(3);
    Box b3(3,4);
    Box b4(3,4,5);

    b1.volume();
    b2.volume();
    b3.volume();
    b4.volume();

    return 0;
}