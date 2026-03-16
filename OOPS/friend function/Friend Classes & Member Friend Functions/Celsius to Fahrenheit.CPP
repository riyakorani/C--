#include<iostream>
using namespace std;

class Temperature{
    float celsius;

public:
    void setTemp(float c){
        celsius = c;
    }

    friend void convert(Temperature);
};

void convert(Temperature t){
    float f = (t.celsius * 9/5) + 32;

    cout<<"Fahrenheit = "<<f;
}

int main(){
    Temperature t;

    t.setTemp(25);

    convert(t);

    return 0;
}