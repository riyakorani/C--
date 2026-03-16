#include<iostream>
using namespace std;

class Item{
    string name;
    int price;

public:
    void setItem(){
        cout<<"Enter item name and price: ";
        cin>>name>>price;
    }

    int getPrice(){
        return price;
    }

    void display(){
        cout<<name<<" : "<<price<<endl;
    }
};

int main(){
    Item items[3];
    int total=0;

    for(int i=0;i<3;i++){
        items[i].setItem();
    }

    cout<<"\nBill\n";

    for(int i=0;i<3;i++){
        items[i].display();
        total += items[i].getPrice();
    }

    cout<<"Total Bill = "<<total<<endl;

    return 0;
}