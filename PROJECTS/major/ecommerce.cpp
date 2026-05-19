#include<iostream>
using namespace std;

class Product{

    string name;
    int price;

public:

    void addProduct(){

        cout<<"Enter product name: ";
        cin>>name;

        cout<<"Enter price: ";
        cin>>price;
    }

    void display(){

        cout<<"Product: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

int main(){

    Product p;

    p.addProduct();

    cout<<"\nProduct Details"<<endl;
    p.display();

    return 0;
}