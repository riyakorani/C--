#include<iostream>
using namespace std;

void printTable(int n, int limit){
    for(int i = 1; i <= limit; i++){
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main(){
    int n, limit;

    cout << "Enter number = ";
    cin >> n;

    cout << "Enter limit = ";
    cin >> limit;

    printTable(n, limit);

    return 0;
}