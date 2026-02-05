#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter a = ";
    cin>>a;
    cout<<"Enter b = ";
    cin>>b;

    cout<<"sum is = "<<(a+b)<<endl;
    cout<<"difference is = "<<(a-b)<<endl;
    cout<<"multipication is = "<<(a*b)<<endl;
    cout<<"division is = "<<(float(a)/b)<<endl;
    cout<<"modulo is = "<<(a%b)<<endl;

    return 0;
}