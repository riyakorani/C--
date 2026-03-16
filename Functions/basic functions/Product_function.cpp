#include<iostream>
using namespace std;

int product(int a,int b){
     return a*b;
    
}

int main(){
    int num1,num2;

     cout<<"Enter number 1 = ";
     cin>>num1;

     cout<<"Enter number 2 = ";
     cin>>num2;

    cout<<"Product is = "<<product(num1,num2);

    return 0;
}