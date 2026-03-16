#include<iostream>
using namespace std;

int fact(int n){
    int fact = 1;

    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
      return fact;
}

int main(){
    int num;

    cout<<"Enter number = ";
    cin>>num;

    cout<<"Factorial of "<<num<<" is "<<fact(num);
    return 0;
}