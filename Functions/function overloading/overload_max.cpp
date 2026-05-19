#include<iostream>
using namespace std;

int max(int a, int b){
    return (a > b) ? a : b;
}

int max(int a, int b, int c){
    if(a >= b && a >= c)
        return a;
    else if(b >= c)
        return b;
    else
        return c;
}

double max(double a, double b){
    return (a > b) ? a : b;
}

int main(){
    cout << max(10, 20) << endl;
    cout << max(10, 20, 30) << endl;
    cout << max(5.5, 2.3) << endl;

    return 0;
}