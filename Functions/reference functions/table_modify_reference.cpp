#include<iostream>
using namespace std;

void printTable(int &n){
    n = n + 1; // modifying original value

    for(int i = 1; i <= 10; i++){
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main(){
    int n = 5;

    printTable(n);

    cout << "\nAfter function, n = " << n;

    return 0;
}