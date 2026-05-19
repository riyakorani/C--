#include<iostream>
using namespace std;

void numbers(int num){
    if(num==0){
        return;
    }
    
     numbers(num - 1);
    cout<<num<<endl;
}

int main(){
    int n;

    cout<<"Enter number = ";
    cin>>n;

    numbers(n);

    return 0;
}