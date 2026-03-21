#include<iostream>
using namespace std;

class Transport{
protected:
    string type;

public:
    Transport(string t){
        type = t;
    }

    virtual void show(){}
};

class Bus : public Transport{
    int seats;

public:
    Bus(string t,int s) : Transport(t){
        seats = s;
    }

    void show(){
        cout<<"Transport: "<<type<<endl;
        cout<<"Seats: "<<seats<<endl;
    }
};

class Train : public Transport{
    int coaches;

public:
    Train(string t,int c) : Transport(t){
        coaches = c;
    }

    void show(){
        cout<<"Transport: "<<type<<endl;
        cout<<"Coaches: "<<coaches<<endl;
    }
};

int main(){

    Transport* t[2];

    Bus b("Bus",40);
    Train tr("Train",20);

    t[0] = &b;
    t[1] = &tr;

    t[0]->show();
    t[1]->show();
}