#include<iostream>
using namespace std;

class Number{
    int a;

public:
    void setData(int x){
        a=x;
    }

    friend int add(Number n1, Number n2);
};

int add(Number n1, Number n2){
    return n1.a + n2.a;
}

int main(){
    Number n1,n2;

    n1.setData(5);
    n2.setData(10);

    cout<<"Sum = "<<add(n1,n2);

    return 0;
}
