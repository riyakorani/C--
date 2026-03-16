#include<iostream>
using namespace std;

class Distance {
private:
    int meter;
    int centimeter;

public:
    void setData(int m1, int c1){
        meter = m1;
        centimeter = c1;
    }

    void add(Distance d1, Distance d2){
        meter = d1.meter + d2.meter;
        centimeter = d1.centimeter + d2.centimeter;

        if(centimeter >= 100){
            meter = meter + centimeter / 100;
            centimeter = centimeter % 100;
        }
    }

    void display(){
        cout<<"Distance = "<<meter<<" meter and "<<centimeter<<" cm"<<endl;
    }
};

int main(){
    
    Distance d1, d2, d3;

    d1.setData(2,30);
    d1.display();

    d2.setData(3,40);
    d2.display();

    d3.add(d1,d2);
    d3.display();

    return 0;
}