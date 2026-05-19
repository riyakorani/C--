#include<iostream>
using namespace std;

class Book{
    int book_id;
    string book_name;

public:

    void addBook(){
        cout<<"Enter Book ID: ";
        cin>>book_id;

        cout<<"Enter Book Name: ";
        cin>>book_name;
    }

    void showBook(){
        cout<<"Book ID: "<<book_id<<endl;
        cout<<"Book Name: "<<book_name<<endl;
    }
};

int main(){

    Book b;

    b.addBook();

    cout<<"\nBook Details"<<endl;
    b.showBook();

    return 0;
}