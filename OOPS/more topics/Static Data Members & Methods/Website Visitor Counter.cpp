#include<iostream>
using namespace std;

class Visitor
{
    int visitorId;
    static int count;

public:

    void setData(){
        cout<<"Enter visitor id: ";
        cin>>visitorId;
        count++;
    }

    void getData(){
        cout<<"Visitor ID: "<<visitorId
            <<" and visitor number "<<count<<endl;
    }

    static void getCount(){
        cout<<"Total visitors: "<<count<<endl;
    }
};

int Visitor::count;

int main(){

    Visitor v1, v2, v3;

    v1.setData();
    v1.getData();
    Visitor::getCount();

    v2.setData();
    v2.getData();
    Visitor::getCount();

    v3.setData();
    v3.getData();
    Visitor::getCount();

}