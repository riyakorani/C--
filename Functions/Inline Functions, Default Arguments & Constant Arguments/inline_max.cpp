#include<iostream>
using namespace std;

inline int findMax(int a, int b){
    return (a > b) ? a : b;
}

int main(){
    int a, b;

    cout << "Enter a and b = ";
    cin >> a >> b;

    cout << "Largest = " << findMax(a, b);

    return 0;
}