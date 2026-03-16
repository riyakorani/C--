#include<iostream>
using namespace std;

class Book{
    string name[50];
    int price[50];
    int counter;

public:
    void initBook(){ counter = 0; }
    void setData(void);
    void displayData(void);
};

void Book::setData(){

    cout<<"Enter book name "<<counter+1<<": ";
    cin>>name[counter];

    cout<<"Enter book price: ";
    cin>>price[counter];

    counter++;
}

void Book::displayData(){

    for(int i=0;i<counter;i++){
        cout<<"Book: "<<name[i]
            <<"  Price: "<<price[i]<<endl;
    }
}

int main(){

    Book B;

    B.initBook();

    B.setData();
    B.setData();
    B.setData();

    B.displayData();

}