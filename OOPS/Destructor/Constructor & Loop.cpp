#include<iostream>
using namespace std;

class Demo{
public:
    Demo(){
        cout<<"Constructor called"<<endl;
    }

    ~Demo(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){

    for(int i=0;i<3;i++){
        Demo d;
    }

    return 0;
}