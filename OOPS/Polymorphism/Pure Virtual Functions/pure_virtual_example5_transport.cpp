#include<iostream>
using namespace std;

class Transport{
public:
    virtual void show() = 0;
};

class Bus : public Transport{
public:
    void show(){
        cout<<"This is a Bus"<<endl;
    }
};

class Train : public Transport{
public:
    void show(){
        cout<<"This is a Train"<<endl;
    }
};

int main(){

    Transport* t[2];

    Bus b;
    Train tr;

    t[0] = &b;
    t[1] = &tr;

    t[0]->show();
    t[1]->show();

}