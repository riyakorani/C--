#include<iostream>
using namespace std;

int main(){
    int a = 7;

    int* p = &a;
    int** q = &p;
    

    //value of a:--
    
    cout<<"Value of a = "<<a<<endl;
    cout<<"Using *p = "<<*p<<endl;
    cout<<"Using **q = "<<**q<<endl;

    return 0;
}