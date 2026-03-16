#include<iostream>
using namespace std;

class Maximum{
    int num;

public:
    void setNumber(int n){
        num = n;
    }

    void printNumber(){
        cout<<"Your number is = "<<num<<endl;
    }

    // Friend function declaration
    friend void maxNumber(Maximum, Maximum);
};

void maxNumber(Maximum n1, Maximum n2){
    if(n1.num > n2.num){
        cout<<"Maximum is "<<n1.num<<endl;
    }
    else{
        cout<<"Maximum is "<<n2.num<<endl;
    }
}

int main(){
    Maximum a, b;

    a.setNumber(10);
    b.setNumber(20);

    maxNumber(a,b);

    return 0;
}