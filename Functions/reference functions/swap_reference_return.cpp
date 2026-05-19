#include<iostream>
using namespace std;

int& swapRef(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

    return a;  // returning reference of 'a'
}

int main(){
    int a = 4, b = 5;

    swapRef(a, b) = 56;

    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}