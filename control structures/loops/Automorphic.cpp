#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number = ";
    cin>>num;

    num = abs(num);

    long long square = 1LL * num * num;

    bool isAutomorphic = true;
    int temp = num;

    while(temp > 0){
        if(temp % 10 != square % 10){
            isAutomorphic = false;
            break;
        }
        temp /= 10;
        square /= 10;
    }

    if(isAutomorphic){
        cout << num << " is an Automorphic Number.";
    }else{
        cout << num << " is NOT an Automorphic Number.";
    }

    return 0;
}