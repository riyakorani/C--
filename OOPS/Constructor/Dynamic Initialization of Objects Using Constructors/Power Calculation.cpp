#include<iostream>
using namespace std;

class Power{
    int base, exponent;

public:
    Power(int b, int e){
        base = b;
        exponent = e;
    }

    void result(){
        int ans = 1;

        for(int i=0;i<exponent;i++){
            ans = ans * base;
        }

        cout<<"Result = "<<ans<<endl;
    }
};

int main(){

    int b,e;

    cout<<"Enter base and exponent: ";
    cin>>b>>e;

    Power p(b,e);   // Dynamic initialization

    p.result();

    return 0;
}