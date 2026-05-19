#include<iostream>
using namespace std;

inline int Square(int n){
    return n*n;
}
int main(){
    int num;

    cout<<"Enter number = ";
    cin>>num;

    cout<<"Square is = "<<Square(num);
    
    return 0;
}