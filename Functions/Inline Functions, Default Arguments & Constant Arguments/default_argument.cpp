#include<iostream>
using namespace std;

float moneyReceived(int money, float rate = 1.04){
    return money * rate;
}

int main(){

    int money = 1000;

    cout<<"Normal interest = "<<moneyReceived(money)<<endl;

    cout<<"VIP interest = "<<moneyReceived(money, 1.10)<<endl;

    return 0;
}