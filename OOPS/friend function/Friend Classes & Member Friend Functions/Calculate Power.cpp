#include<iostream>
using namespace std;

class Power{
    int base, exponent;

public:
    void setData(int b,int e){
        base = b;
        exponent = e;
    }

    friend void calculate(Power);
};

void calculate(Power p){
    int result = 1;

    for(int i=1;i<=p.exponent;i++){
        result = result * p.base;
    }

    cout<<"Power = "<<result;
}

int main(){
    Power p;

    p.setData(2,5);

    calculate(p);

    return 0;
}