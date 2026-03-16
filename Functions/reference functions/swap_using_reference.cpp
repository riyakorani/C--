#include<iostream>
using namespace std;

void swapReference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x,y;

    cout<<"Enter x = ";
    cin>>x;

    cout<<"Enter y = ";
    cin>>y;

    cout<<"Value of x = "<<x<<" y = "<<y<<endl;

    swapReference(x,y);   

    cout<<"Value of x = "<<x<<" y = "<<y<<endl;

    return 0;
}