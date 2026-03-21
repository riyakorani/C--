#include<iostream>
using namespace std;

int main(){

    int *arr = new int[4];

    for(int i=0;i<4;i++){
        cout<<"Enter element "<<i<<": ";
        cin>>*(arr+i);
    }

    cout<<"Elements are:"<<endl;

    for(int i=0;i<4;i++){
        cout<<*(arr+i)<<endl;
    }

    delete[] arr;

    return 0;
}