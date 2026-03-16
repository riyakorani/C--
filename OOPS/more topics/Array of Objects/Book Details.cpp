#include<iostream>
using namespace std;

class Book{
    int id;
    int price;

public:
    void setData(){
        cout<<"Enter book id: ";
        cin>>id;
        cout<<"Enter price: ";
        cin>>price;
    }

    void display(){
        cout<<"Book ID: "<<id<<" Price: "<<price<<endl;
    }
};

int main(){
    Book b[5];

    for(int i=0;i<5;i++){
        b[i].setData();
    }

    for(int i=0;i<5;i++){
        b[i].display();
    }

    return 0;
}