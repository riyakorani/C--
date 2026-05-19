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
    switch(num){
    case 1: cout << "Even";
        break;
    case 0: cout << "Odd";
        break;
    default: cout << "Invalid";
}

    return 0;
}