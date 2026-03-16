#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter number = ";
    cin>>n;

    if((n%3==0 && n%5!=0) || (n%5==0 && n%3!=0)){
        cout<<"Yes, divisible by 3 or 5 but not both";
    }
    else{
        cout<<"No";
    }

    return 0;
}