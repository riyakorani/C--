#include<iostream>
using namespace std;

int main(){

    int *a = new int;
    float *b = new float;
    char *c = new char;

    *a = 10;
    *b = 5.5;
    *c = 'R';

    cout<<"Integer: "<<*a<<endl;
    cout<<"Float: "<<*b<<endl;
    cout<<"Character: "<<*c<<endl;

    delete a;
    delete b;
    delete c;

    return 0;
}