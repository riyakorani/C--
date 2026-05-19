#include<iostream>
using namespace std;

void checkPrime(int n){
    if(n<=1){
        cout<<"Not Prime";
        return;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<"Not Prime";
            return;
        }
    }
    cout << "Prime";
}
int main(){
     int num;

    cout << "Enter number = ";
    cin >> num;

    checkPrime(num);

    return 0;
}