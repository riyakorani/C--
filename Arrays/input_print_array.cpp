#include<iostream>
using namespace std;

int main(){
    int marks[] = {24,56,78,98,45};
    
    cout<<"marks[0] = "<<marks[0]<<endl;
    cout<<"marks[1] = "<<marks[1]<<endl;
    cout<<"marks[2] = "<<marks[2]<<endl;
    cout<<"marks[3] = "<<marks[3]<<endl;
    cout<<"marks[4] = "<<marks[4]<<endl;

    for(int i=0; i<5;i++){
        cout<<"marks of "<<i<<" = "<<marks[i]<<endl;
    }

    return 0;
}

#include<iostream>
using namespace std;

int main(){

    int arr[] = {12,23,34,45,56,67,78,89,90,100};

    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = n-1; i >= 0; i--){
        cout<<arr[i]<<" ";
    }

    return 0;
}