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


// #include<iostream>
// using namespace std;

// inline int product(int a, int b){
//     return a * b;
// }

// double moneyReceived(int currentMoney, double factor = 1.04){
//     return currentMoney * factor;
// }

// int main(){
//     int money = 100000;

//     cout << "If you have " << money 
//          << " Rs in your bank account, you will receive "
//          << moneyReceived(money) 
//          << " Rs after 1 year" << endl;

//     cout << "For VIP: If you have " << money 
//          << " Rs in your bank account, you will receive "
//          << moneyReceived(money, 1.1) 
//          << " Rs after 1 year";

//     return 0;
// }