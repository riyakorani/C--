#include<iostream>
using namespace std;

class Number{
    int num;

public:
    void setValue(int n){
        num = n;
    }

    friend void countDigits(Number);
};

void countDigits(Number n){
    int count = 0;

    while(n.num != 0){
        n.num = n.num / 10;
        count++;
    }

    cout<<"Total digits = "<<count;
}

int main(){
    Number n;

    n.setValue(54321);

    countDigits(n);

    return 0;
}