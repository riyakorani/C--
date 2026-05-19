#include<iostream>
using namespace std;

void rem(int n){
    int rem = 0;
    int sum = 0;
    int original = n;

    while(n>0){
     rem = n%10;
     sum =sum+(rem*rem*rem);
     n = n/10;
    }
    if (original == sum){
        cout<<"Armstrong";
    } else{
        cout<<"not armstrong";
    }
}
int main(){
    int num;

    cout<<"Enter number = ";
    cin>>num;

    rem(num);

    return 0;
}




#include<iostream>
using namespace std;

void checkArmstrong(int n){
    int sum = 0;
    int original = n;

    while(n > 0){
        int digit = n % 10;
        sum += (digit * digit * digit);
        n = n / 10;
    }

    if(original == sum){
        cout << "Armstrong";
    } else {
        cout << "Not Armstrong";
    }
}

int main(){
    int num;

    cout << "Enter number = ";
    cin >> num;

    checkArmstrong(num);

    return 0;
}