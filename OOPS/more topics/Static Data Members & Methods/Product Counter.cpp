#include<iostream>
using namespace std;

class Product
{
    int id;
    static int count;

public:

    void setData(){
        cout<<"Enter product id: ";
        cin>>id;
        count++;
    }

    void getData(){
        cout<<"Product ID: "<<id
            <<" and this is product number "<<count<<endl;
    }

    static void getCount(){
        cout<<"Total products: "<<count<<endl;
    }
};

int Product::count;

int main(){

    Product p1, p2, p3;

    p1.setData();
    p1.getData();
    Product::getCount();

    p2.setData();
    p2.getData();
    Product::getCount();

    p3.setData();
    p3.getData();
    Product::getCount();

}