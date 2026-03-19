#include<iostream>
using namespace std;

class Number{
    int n;

public:
    Number(int x){
        n = x;
    }

    Number(Number &obj){
        cout<<"Copy constructor called"<<endl;
        n = obj.n;
    }

    void display(){
        cout<<"Number = "<<n<<endl;
    }
};

int main(){
    Number n1(30);
    Number n2 = n1;
    Number n3(n2);

    n1.display();
    n2.display();
    n3.display();

    return 0;
}