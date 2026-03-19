#include<iostream>
using namespace std;

class Temperature{
    float c;

public:
    Temperature(float x=0){
        c = x;
    }

    void convert(){
        cout<<"Fahrenheit = "<<(c*9/5)+32<<endl;
    }
};

int main(){
    Temperature t1;
    Temperature t2(25);

    t1.convert();
    t2.convert();

    return 0;
}