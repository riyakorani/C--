#include<iostream>
using namespace std;

class Car{
public:
    string brand;
    int price;

    void setData(){
        cin>>brand>>price;
    }

    void display(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

int main(){
    Car c;
    c.setData();
    c.display();
}