#include<iostream>
using namespace std;

int main(){
    int a,b;
    int gcd=1;

    cout<<"Enter a = ";
    cin>>a;

    cout<<"Enter b = ";
    cin>>b;

    for(int i=1;i<=min(a,b);i++){
       if(a%i==0 && b%i==0){
        gcd=i;
       }
    } 
    int lcm = (a*b)/gcd;

    cout<<"GCD = "<<gcd<<endl;
    cout<<"LCM = "<<lcm<<endl;
    return 0;
}