#include<iostream>
using namespace std;

int add(int a, int b = 5){
    return a + b;
}

int main(){
    cout << add(10) << endl;     // b = 5 → 15
    cout << add(10, 20);         // b = 20 → 30

    return 0;
}