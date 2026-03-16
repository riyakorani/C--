#include<iostream>
using namespace std;

inline int square(int a){
    return a*a;
}

int main(){
    int num;

    cout<<"Enter number = ";
    cin>>num;

    cout<<"Square = "<<square(num);

    return 0;
}