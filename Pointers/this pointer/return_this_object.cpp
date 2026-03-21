#include<iostream>
using namespace std;

class Number{
    int x;

public:
    Number& setValue(int x){
        this->x = x;
        return *this;
    }

    void display(){
        cout<<"Value: "<<x<<endl;
    }
};

int main(){

    Number n;
    n.setValue(20).display();

    return 0;
}