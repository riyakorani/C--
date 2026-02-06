#include<iostream>
using namespace std;

int main(){
    int n;
    int digit;
    int count = 0;

    cout<<"Enter a number = ";
    cin>>n;

    while(n>0){
        digit = n%10;

        if(digit==2 || digit==3 || digit==5 || digit==7){
            count++;
        }
        n = n/10;
    }
    cout<<"no of prime numbers = "<<count;
    return 0;
}