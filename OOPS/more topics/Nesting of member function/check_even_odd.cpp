#include<iostream>
using namespace std;

class number{
    private:
       int num;

    public:
         void read();
         void check();
};

void number :: read(){
    cout<<"Enter number = ";
    cin>>num;

    check();   // nested function

}

void number :: check(){
    if(num%2==0){
        cout<<"Even";
    } else{
        cout<<"Odd";
    }
}
int main(){
    number n;

    n.read();
    // n.check();

    return 0;
}









