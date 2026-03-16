#include<iostream>
using namespace std;

int max(int a, int b){

    if(a>b)
        return a;
    else
        return b;
}

int max(int a, int b, int c){

    if(a>b && a>c)
        return a;

    else if(b>c)
        return b;

    else
        return c;
}

int main(){

    cout<<"Max of 2 numbers = "<<max(10,20)<<endl;

    cout<<"Max of 3 numbers = "<<max(10,20,30)<<endl;

    return 0;
}