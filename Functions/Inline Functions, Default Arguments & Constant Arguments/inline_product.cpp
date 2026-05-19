#include<iostream>
using namespace std;

inline int product(int a,int b){
    return a*b;
}
int main(){
    int n1,n2;

    cout<<"Enter n1 and n2 = ";
    cin>>n1>>n2;

    cout<<"Product is = "<<product(n1,n2);

    return 0;
}