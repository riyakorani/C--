#include<iostream>
using namespace std;

class Shop{
    int itemId;
    int price;

public:
    void setData(){
        cout<<"Enter item ID: ";
        cin>>itemId;

        cout<<"Enter price: ";
        cin>>price;
    }

    void display(){
        cout<<"Item ID: "<<itemId<<" Price: "<<price<<endl;
    }
};

int main(){
    Shop s[3];

    for(int i=0;i<3;i++){
        s[i].setData();
    }

    for(int i=0;i<3;i++){
        s[i].display();
    }

    return 0;
}
