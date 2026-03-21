#include<iostream>
using namespace std;

class Book{
    int pages;
    float price;

public:
    void setData(int p,float pr){
        pages = p;
        price = pr;
    }

    void display(){
        cout<<"Pages: "<<pages<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

int main(){

    Book *b = new Book;

    b->setData(250,399.5);
    b->display();

    delete b;

    return 0;
}