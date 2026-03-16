#include<iostream>
using namespace std;

class Distance{
    int meter;

public:
    void setData(int m){
        meter = m;
    }

    friend void compare(Distance d1, Distance d2);
};

void compare(Distance d1, Distance d2){
    if(d1.meter > d2.meter)
        cout<<"First distance is greater";
    else
        cout<<"Second distance is greater";
}

int main(){
    Distance d1,d2;

    d1.setData(50);
    d2.setData(70);

    compare(d1,d2);
}