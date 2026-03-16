#include<iostream>
using namespace std;

void printNumber(const int a){
    cout<<"Number = "<<a<<endl;

    // a = 10;  not allowed
}

int main(){

    int x = 5;

    printNumber(x);

    return 0;
}