#include<iostream>
using namespace std;

class Distance{
    int meter;
    int centimeter;

public:
    void setData(int m, int c){
        meter = m;
        centimeter = c;
    }

    void display(){
        cout<<meter<<"m "<<centimeter<<"cm"<<endl;
    }

    // Friend function
    friend Distance addDistance(Distance d1, Distance d2);
};

Distance addDistance(Distance d1, Distance d2){
    Distance d3;

    d3.meter = d1.meter + d2.meter;
    d3.centimeter = d1.centimeter + d2.centimeter;

    // Convert extra centimeters to meter
    if(d3.centimeter >= 100){
        d3.meter += d3.centimeter / 100;
        d3.centimeter = d3.centimeter % 100;
    }

    return d3;
}

int main(){
    Distance d1, d2, d3;

    d1.setData(2,50);
    d2.setData(3,70);

    cout<<"Distance 1 = ";
    d1.display();

    cout<<"Distance 2 = ";
    d2.display();

    d3 = addDistance(d1,d2);

    cout<<"Total Distance = ";
    d3.display();

    return 0;
}