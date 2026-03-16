#include<iostream>
using namespace std;

class Movie{
    string name;
    int price;
    int tickets;

public:
    void book(){
        cout<<"Enter movie name: ";
        cin>>name;

        cout<<"Enter ticket price: ";
        cin>>price;

        cout<<"Enter number of tickets: ";
        cin>>tickets;
    }

    void bill(){
        cout<<"Movie: "<<name<<endl;
        cout<<"Total Bill = "<<price*tickets<<endl;
    }
};

int main(){
    Movie m;

    m.book();
    m.bill();

    return 0;
}