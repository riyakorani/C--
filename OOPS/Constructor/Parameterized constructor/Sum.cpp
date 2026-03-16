#include<iostream>
using namespace std;

class Sum{
    int a,b;

public:
    Sum(int x,int y){
        a = x;
        b = y;
    }

    void result(){
        cout << "Sum = " << a + b << endl;
    }
};

int main(){
    Sum s1(4,6);
    s1.result();

    return 0;
}