#include<iostream>
using namespace std;

int main(){
    int n;
    int binary = 0;
    int place = 1;

    cout<<"Enter a decimal number = ";
    cin>>n;

    while(n>0){
        int rem = n%2;
        binary = binary+rem*place;
        place = place*10;
        n = n/2;
    }

    cout<<"Binary number = "<<binary;
    return 0;
}