#include<iostream>
using namespace std;

int sumDigits(int n){
    int sum = 0;

    while(n > 0){
        int digit = n%10;
        sum += digit;
        n /= 10;
    }

    return sum;
}

int main(){
    int n;
    cout << "Enter number = ";
    cin >> n;

    cout << "Sum of digits = " << sumDigits(n);
    return 0;
}