#include<iostream>
using namespace std;

class Calculator{
    int num;

public:
    Calculator& setNum(int n){
        num = n;
        return *this;
    }

    Calculator& add(int x){
        num += x;
        return *this;
    }

    Calculator& display(){
        cout<<"Result: "<<num<<endl;
        return *this;
    }
};

int main(){

    Calculator c;

    c.setNum(10).add(5).display();

    return 0;
}