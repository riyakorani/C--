#include<iostream>
using namespace std;

int main(){
    float P,R,T;
    float simpleInterest;; 
    cout<<"Enter Principal = ";
    cin>>P;

    cout<<"Enter Rate = ";
    cin>>R;

    cout<<"Enter Time = ";
    cin>>T;

    simpleInterest = (P*R*T)/100;

    cout<<"Simple interest is = "<<simpleInterest<<endl;


    return 0;
}