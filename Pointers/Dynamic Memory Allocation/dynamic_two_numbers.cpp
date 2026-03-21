#include<iostream>
using namespace std;

int main(){

    int *num = new int[2];

    cout<<"Enter first number: ";
    cin>>num[0];

    cout<<"Enter second number: ";
    cin>>num[1];

    cout<<"Sum = "<<num[0] + num[1]<<endl;

    delete[] num;

    return 0;
}