#include<iostream>
using namespace std;

class Item{
    int id,price;

public:
    void setData(){
        cout<<"Enter item id and price: ";
        cin>>id>>price;
    }

    int getPrice(){
        return price;
    }

    void display(){
        cout<<"Item "<<id<<" Price "<<price<<endl;
    }
};

int main(){
    Item items[3];
    int total=0;

    for(int i=0;i<3;i++){
        items[i].setData();
    }

    cout<<"\nItems:\n";

    for(int i=0;i<3;i++){
        items[i].display();
        total += items[i].getPrice();
    }

    cout<<"Total Bill = "<<total<<endl;

    return 0;
}