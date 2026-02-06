#include<iostream>
using namespace std;

int main(){
    int num;
    int square;
    int temp;

    cout<<"Enter a number = ";
    cin>>num;

    square = num*num;
    bool isAutomorphic = true;
    temp = num;

    while(temp>0){
        if(temp%10 != square%10){
            isAutomorphic = false;
            break;

        }
        temp = temp/10;
        square = square/10;
    }
    if(isAutomorphic) {
        cout << num << " is an Automorphic Number.";
    } else {
        cout << num << " is NOT an Automorphic Number.";
    }
    return 0;
}