#include<iostream>
using namespace std;

void numbers(int num){
    if(num==0){
        return;
    }
    cout<<num<<" ";

    numbers(num - 1);
}

int main(){
    int n;

    cout<<"Enter number = ";
    cin>>n;

    numbers(n);

    return 0;
}