#include<iostream>
using namespace std;

int main(){
    int a=5;

    int* p =&a;

    cout<<"The address of a = "<<&a<<endl;
    cout<<"The address of a = "<<p<<endl;
    cout<<"Value of a = "<<*p<<endl;

    //Changing the value of a:-
      *p =20;

      cout<<"New value of a = "<<a<<endl;

    return 0;
}