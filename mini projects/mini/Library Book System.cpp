#include<iostream>
using namespace std;

class Book{
    int id;
    string title;

public:
    void setData(){
        cout<<"Enter book ID: ";
        cin>>id;

        cout<<"Enter title: ";
        cin>>title;
    }

    void display(){
        cout<<"Book ID: "<<id<<" Title: "<<title<<endl;
    }
};

int main(){
    Book library[3];

    for(int i=0;i<3;i++){
        library[i].setData();
    }

    cout<<"\nBooks in library:\n";

    for(int i=0;i<3;i++){
        library[i].display();
    }

    return 0;
}