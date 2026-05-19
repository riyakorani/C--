#include<iostream>
using namespace std;

void swapPointer(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a,b;

    cout<<"Enter a = ";
    cin>>a;

    cout<<"Enter b = ";
    cin>>b;

    cout<<"before swapping:";
    cout<<"\nValue of a = "<<a<<" and b = "<<b<<endl;

    swapPointer(&a,&b);

     cout<<"After swapping:";
    cout<<"\nValue of a = "<<a<<" and b = "<<b<<endl;



    return 0;
}