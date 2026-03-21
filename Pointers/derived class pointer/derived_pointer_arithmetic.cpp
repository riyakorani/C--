#include<iostream>
using namespace std;

class Base{
public:
    int a;
};

class Derived : public Base{
public:
    int b;

    void show(){
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
};

int main(){

    Derived *ptr = new Derived[3];
    Derived *temp = ptr;

    for(int i=0;i<3;i++){
        ptr->a = i+1;
        ptr->b = (i+1)*10;
        ptr++;
    }

    for(int i=0;i<3;i++){
        temp->show();
        temp++;
    }

    return 0;
}