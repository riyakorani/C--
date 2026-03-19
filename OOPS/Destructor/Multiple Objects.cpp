#include<iostream>
using namespace std;

class Test{
public:
    Test(){
        cout<<"Constructor"<<endl;
    }

    ~Test(){
        cout<<"Destructor"<<endl;
    }
};

int main(){
    Test a,b,c;

    cout<<"Objects created"<<endl;

    return 0;
}