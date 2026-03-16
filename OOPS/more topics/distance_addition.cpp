#include<iostream>
using namespace std;

class Distance
{
    int meter;
    int centimeter;

public:
    void setData(int m, int cm){
        meter = m;
        centimeter = cm;
    }

    void addDistance(Distance d1, Distance d2){
        meter = d1.meter + d2.meter;
        centimeter = d1.centimeter + d2.centimeter;

        if(centimeter >= 100){
            meter++;
            centimeter -= 100;
        }
    }

    void display(){
        cout<<"Distance = "<<meter<<" m "<<centimeter<<" cm"<<endl;
    }
};

int main(){
    Distance d1, d2, d3;

    d1.setData(3,40);
    d2.setData(2,80);

    d3.addDistance(d1,d2);

    d1.display();
    d2.display();
    d3.display();

    return 0;
}
