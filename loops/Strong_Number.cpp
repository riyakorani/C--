#include<iostream>
using namespace std;

int main(){
    int n;
    int original;
    int digit;
    int sum=0;

    cout<<"Enter a number = ";
    cin>>n;

    original=n;

    while(n>0){
        digit= n%10;
    
    int fact=1;
    for(int i=1;i<=digit;i++){
        fact=fact*i;
    }
    sum=sum+fact;
    n=n/10;
  }
  if(sum==original){
    cout<<"Strong number";
  }else{
    cout<<"Not a strong number";
  }
    return 0;
}