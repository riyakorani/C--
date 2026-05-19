//for 3 digits:---
#include<iostream>
using namespace std;

int main(){
    int n,original,rem,sum=0;

    cout<<"Enter number = ";
    cin>>n;

    original=n;

    while(n != 0){
        rem = n%10;
        sum = sum+(rem*rem*rem);
        n = n/10;

    }
    if(sum==original){
        cout<<"Armstrong number.";
    }else{
        cout<<" not an Armstrong number.";
    }
    return 0;
}





#include<iostream>
using namespace std;

int main(){
    int n, original, rem, sum = 0, digits = 0;

    cout << "Enter number = ";
    cin >> n;

    original = n;
    n = abs(n);

    int temp = n;

    // Step 1: count digits
    while(temp != 0){
        digits++;
        temp /= 10;
    }

    // Step 2: reset temp
    temp = n;

    // Step 3: Armstrong logic (without pow)
    while(temp != 0){
        rem = temp % 10;

        int power = 1;
        for(int i = 0; i < digits; i++){
            power *= rem;
        }

        sum += power;
        temp /= 10;
    }

    // Step 4: check
    if(sum == original){
        cout << "Armstrong number";
    }else{
        cout << "Not an Armstrong number";
    }

    return 0;
}