#include<iostream>
using namespace std;

class Interest{
    float p,r,t;

public:
    Interest(float a, float b=5, float c=2){
        p = a;
        r = b;
        t = c;
    }

    void calculate(){
        cout<<"Simple Interest = "<<(p*r*t)/100<<endl;
    }
};

int main(){
    Interest i1(1000);
    Interest i2(1000,10);
    Interest i3(1000,10,3);

    i1.calculate();
    i2.calculate();
    i3.calculate();

    return 0;
}