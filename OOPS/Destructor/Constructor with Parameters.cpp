#include<iostream>
using namespace std;

class Number{
    int x;

public:
    Number(int a){
        x = a;
        cout<<"Constructor called for "<<x<<endl;
    }

    ~Number(){
        cout<<"Destructor called for "<<x<<endl;
    }
};

int main(){
    Number n1(10);
    Number n2(20);

    return 0;
}