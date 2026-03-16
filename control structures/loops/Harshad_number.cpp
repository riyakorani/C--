#include<iostream>
using namespace std;

int main(){
    int num;
    int temp;
    int sum=0;

    cout<<"Enter a number = ";
    cin>>num;

    temp=num;

    while(temp>0){
        sum = sum+temp%10;
        temp = temp/10;
    }

    if(num%sum==0){
        cout<<num<<" is a harshad number";
    }else{
        cout<<num<<" is not a harshad number";
    }
    return 0;
}