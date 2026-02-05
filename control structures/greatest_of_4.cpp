#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cout<<"Enter a = ";
    cin>>a;

    cout<<"Enter b = ";
    cin>>b;

    cout<<"Enter c = ";
    cin>>c;

    cout<<"Enter d = ";
    cin>>d;

    if(a>b && a>c && a>d){
        cout<<"a is greatest.";
    }else if(b>a && b>c && b>d){
        cout<<"b is  greatest.";
    }else if(c>a && c>b && c>d){
        cout<<"c is greatest.";
    }else if(d>a && d>b && d>c){
        cout<<"d is greatest.";
    }else if(a==b && b==c && c==d){
        cout<<"All are equal.";
    }else{
        cout<<"Some of them are equal.";
    }
    
    return 0;
}