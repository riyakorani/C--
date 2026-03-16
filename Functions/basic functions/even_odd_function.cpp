#include<iostream>
using namespace std;

void even_odd(int num){
    if(num%2==0){
        cout<<"Even";
    }else{
        cout<<"Odd";
    }
}

int main(){
    int x;

    cout<<"Enter x = ";
    cin>>x;

    even_odd(x);   

    return 0;
}