#include<iostream>
using namespace std;

int sum(int a,int b){
    int c = a+b;
    return c;
}

int main(){
    int x,y;

    cout<<"Enter x = ";
    cin>>x;

    cout<<"Enter y = ";
    cin>>y;

    cout<<"Sum is = "<<sum(x,y)<<endl;
    return 0;
}