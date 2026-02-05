#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number = ";
    cin>>n;

    if(n%3==0 && n%5==0){
        cout<<"Divisor by both 3 and 5.";
    }else if (n%3==0){
        cout<<"Divisor by 3.";
    }else if(n%5==0){
        cout<<"Divisor by 5.";
    }else {
        cout<<"Neither divisor by 3 nor 5.";
    }
    
    return 0;
}