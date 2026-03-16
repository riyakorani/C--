#include<iostream>
using namespace std;

class Temp{
public:
    float celsius;

    void setTemp(float t){
        celsius=t;
    }

    void convert(){
        float f = (celsius*9/5)+32;
        cout<<"Fahrenheit = "<<f<<endl;
    }
};

int main(){
    Temp t;

    t.setTemp(25);
    t.convert();
}