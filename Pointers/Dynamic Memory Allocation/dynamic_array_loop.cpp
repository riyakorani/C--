#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int *arr = new int[n];

    for(int i=0;i<n;i++){
        cout<<"Enter value "<<i<<" : ";
        cin>>arr[i];
    }

    cout<<"Array elements are:"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    delete[] arr;

    return 0;
}