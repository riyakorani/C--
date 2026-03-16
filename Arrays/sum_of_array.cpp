#include<iostream>
using namespace std;

int main(){
    int arr[] = {34,56,23,78,97};
    int sum = 0;

    for(int i=0; i<5;i++){
        sum = sum+arr[i];
    }
    
    cout<<"Sum of the array = "<<sum;
    return 0;
}