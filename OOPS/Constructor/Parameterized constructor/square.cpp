#include<iostream>
using namespace std;

class Square{
    int n;

public:
    Square(int x){
        n = x;
    }

    void show(){
        cout << "Square = " << n*n << endl;
    }
};

int main(){
    Square s1(7);
    s1.show();

    return 0;
}