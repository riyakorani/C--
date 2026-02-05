#include<iostream>
using namespace std;

int main(){
    int n;
    int count = 0;

    cout<<"Enter n = ";
    cin>>n;

    if(n == 0) count = 1;

    while(n != 0){
        n = n / 10;
        count++;
    }

    cout<<"Digits = "<<count;

    return 0;
}
