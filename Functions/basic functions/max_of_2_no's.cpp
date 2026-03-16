#include<iostream>
using namespace std;

int maximum(int num1, int num2){
    if(num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
}

int main(){
    int x,y;

    cout<<"Enter x = ";
    cin>>x;

    cout<<"Enter y = ";
    cin>>y;

    cout<<"Maximum number = "<<maximum(x,y);

    return 0;
}