#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number = ";
    cin>>n;

    int num;
    if(n%2==0){
        num=1;
    }else{
        num=0;
    }
    switch (num){
    case 1 : cout<<"Even";
        break;
    case 2 : cout<<"odd";
    
    default: cout<<"not a valid number";
        break;
    }
    return 0;
}