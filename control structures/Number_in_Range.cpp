#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number = ";
    cin >> n;

    if(n >= 1 && n <= 10)
        cout << "Small";
    else if(n >= 11 && n <= 100)
        cout << "Medium";
    else if(n >= 101 && n <= 1000)
        cout << "Large";
    else
        cout << "Out of range";

    return 0;
}
