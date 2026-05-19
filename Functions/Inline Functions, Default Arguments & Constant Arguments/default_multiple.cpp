#include<iostream>
using namespace std;

int volume(int l = 1, int b = 1, int h = 1){
    return l * b * h;
}

int main(){
    cout << volume() << endl;        // 1*1*1 = 1
    cout << volume(5) << endl;       // 5*1*1 = 5
    cout << volume(5, 2) << endl;    // 5*2*1 = 10
    cout << volume(5, 2, 3);         // 5*2*3 = 30

    return 0;
}