#include<iostream>
using namespace std;

class Test{
    int num;

public:
    void setData(int n){
        num = n;
    }

    void compare(Test t){
        if(this->num == t.num)
            cout<<"Numbers are equal"<<endl;
        else
            cout<<"Numbers are different"<<endl;
    }
};

int main(){

    Test t1, t2;

    t1.setData(10);
    t2.setData(10);

    t1.compare(t2);

    return 0;
}