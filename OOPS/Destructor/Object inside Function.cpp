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

void fun(){
    Demo d;
    cout<<"Inside function"<<endl;
}

int main(){
    cout<<"Start main"<<endl;

    fun();

    cout<<"Back to main"<<endl;

    return 0;
}