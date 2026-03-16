#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n = ";
    cin>>n;

    if(n>0){
        cout<<"+ve number.";
    }else if(n==0){
        cout<<"Zero";
    }else if(n<0){
        cout<<"-ve number.";
    }else{
        cout<<"not a valid number.";
    }
    return 0;
}