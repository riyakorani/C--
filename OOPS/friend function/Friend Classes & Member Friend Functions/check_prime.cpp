#include<iostream>
using namespace std;

class Number{
    int n;

public:
    void setValue(int x){
        n = x;
    }

    friend void checkPrime(Number);
};

void checkPrime(Number a){
    int i, flag = 0;

    for(i=2;i<a.n;i++){
        if(a.n % i == 0){
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        cout<<"Prime Number";
    else
        cout<<"Not Prime";
}

int main(){
    Number a;

    a.setValue(7);

    checkPrime(a);

    return 0;
}