#include<iostream>
using namespace std;

int& findMax(int &a,int &b,int &c){
    if(a>=b and a>=c) {
        return a;
    } else if(b>=c){
        return b;
    } else{
        return c;
    }
}
int main(){
    int a,b,c;

    cout<<"Enter a = ";
    cin>>a;

    cout<<"Enter b = ";
    cin>>b;

    cout<<"Enter c = ";
    cin>>c;

    int &largest = findMax(a, b , c);

    cout << "Largest number = " << largest;


    return 0;
}