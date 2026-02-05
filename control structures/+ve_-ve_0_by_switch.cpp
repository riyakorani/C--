#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number = ";
    cin>>n;
    
    int code;
    if(n>0){
        code=1;
    }else if(n<0){
        code=-1;
    }else{
        code=0;
    }

    switch (code){
    case 1: cout<<"Positive";
        break;
    case -1: cout<<"negative";
        break;
    case 0: cout<<"Zero";
        break;
    
    default: cout<<"not a valid number";
        break;
    }
    return 0;
}