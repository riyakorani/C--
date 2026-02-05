#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter a = ";
    cin>>a;

    cout<<"Enter b = ";
    cin>>b;

    cout<<"\nBefore swapping:--"<<" a = "<<a<< " and " <<" b = "<<b<<endl;

    // XOR OPERATOR:--
    a=a^b;
    b=a^b;
    a=a^b;

    cout<<"\nAfter swapping:--"<<" a = "<<a<<" and "<<" b = "<<b<<endl;

    return 0;
}