#include<iostream>
using namespace std;

class Box{
    int l,b,h;

public:
    Box(){
        l=b=h=1;
    }

    Box(int x){
        l=b=h=x;
    }

    Box(int x,int y,int z){
        l=x;
        b=y;
        h=z;
    }

    void volume(){
        cout<<"Volume = "<<l*b*h<<endl;
    }
};

int main(){
    Box b1;
    Box b2(3);
    Box b3(2,3,4);

    b1.volume();
    b2.volume();
    b3.volume();

    return 0;
}