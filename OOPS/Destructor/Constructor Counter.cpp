#include<iostream>
using namespace std;

class Count{
    static int x;

public:
    Count(){
        x++;
        cout<<"Constructor called "<<x<<" times"<<endl;
    }

    ~Count(){
        cout<<"Destructor called "<<x<<" times"<<endl;
        x--;
    }
};

int Count::x = 0;

int main(){
    Count c1,c2,c3;

    return 0;
}