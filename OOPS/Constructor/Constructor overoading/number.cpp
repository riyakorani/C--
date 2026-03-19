#include<iostream>
using namespace std;

class Number{
    int n;

public:
    Number(){
        n = 0;
    }

    Number(int x){
        n = x;
    }

    void show(){
        cout<<"Number = "<<n<<endl;
    }
};

int main(){
    Number n1;
    Number n2(10);

    n1.show();
    n2.show();

    return 0;
}