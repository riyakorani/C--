#include<iostream>
using namespace std;

int main(){
    int a=5;
    float b=2;
    cout<<a/b<<endl;

    int x = 7;
    int y = 2;
    float z=x/y;
    cout<<z<<endl;

    int price = 99.99;
    cout<<price<<endl;

    float a1= 10/3;
    float b1=10.0/3;
    cout<<a1<<endl;
    cout<<b1<<endl;

    int d=65;
    char ch=d;
    cout<<ch<<endl;

    int a3='a';
    cout<<int(a3)<<endl;

    int e=9999999999;
    cout<<e<<endl; 
    // (This is WAY bigger than int limit
    // Wrong output 
    // garbage value
    // Undefined behavior ❌
    // save it as long long ✅)


    

    
    return 0;
}