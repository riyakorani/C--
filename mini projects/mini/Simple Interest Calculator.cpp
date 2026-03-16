#include<iostream>
using namespace std;

class Interest{
    int p,r,t;

public:
    void setData(){
        cout<<"Enter principal rate time: ";
        cin>>p>>r>>t;
    }

    void calculate(){
        cout<<"Simple Interest = "<<(p*r*t)/100<<endl;
    }
};

int main(){
    Interest i;

    i.setData();
    i.calculate();

    return 0;
}
