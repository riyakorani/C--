#include<iostream>
using namespace std;

class Book{
public:
    string title;
    int price;

    void setData(){
        cin>>title>>price;
    }

    void display(){
        cout<<"Book: "<<title<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

int main(){
    Book b;

    b.setData();
    b.display();
}