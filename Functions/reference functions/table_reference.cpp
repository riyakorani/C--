#include<iostream>
using namespace std;

void refTable(int &n){
    for ( int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    
}
int main(){
    int num;

    cout<<"Enter number = ";
    cin>>num;

    refTable(num);

    return 0;
}