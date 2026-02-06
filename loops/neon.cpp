#include<iostream>
using namespace std;

int main(){
    int num;
    int square;
    int sum=0;
    int temp;
    int digit;

    cout<<"Enter a number = ";
    cin>>num;

    square=num*num;

    temp=square;

    while (temp>0){
       digit = temp%10;
       sum = sum+digit;
       temp = temp/10;
        
    }
    if(sum==num){
        cout<<num<<" is a neon number ";
    }else{
        cout<<num<<" is not a neon number";
    }
    
    return 0;
}