#include<iostream>
using namespace std;

int main(){
    int n,original,rem,sum=0;

    cout<<"Enter number = ";
    cin>>n;

    original=n;

    while(n != 0){
        rem = n%10;
        sum = sum+(rem*rem*rem);
        n = n/10;

    }
    if(sum==original){
        cout<<"Armstrong number.";
    }else{
        cout<<" not an Armstrong number.";
    }
    return 0;
}