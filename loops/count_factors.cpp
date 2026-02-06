#include<iostream>
using namespace std;

int main(){
    int num;
    int count = 0;

    cout<<"Enter a number = ";
    cin>>num;

    cout<<"factors of "<<num<<" are : ";

    for(int i=1;i<=num;i++){
        if(num%i==0){
            cout<<i<<" ";
            count++;
        }
    }
    cout<<"total number of factors are : "<<count;
    return 0;
}