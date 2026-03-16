#include<iostream>
using namespace std;

class Product{

    string name[50];
    int quantity[50];
    int counter;

public:
    void initProduct(){ counter = 0; }
    void setData(void);
    void displayData(void);
};

void Product::setData(){

    cout<<"Enter product name "<<counter+1<<": ";
    cin>>name[counter];

    cout<<"Enter quantity: ";
    cin>>quantity[counter];

    counter++;
}

void Product::displayData(){

    for(int i=0;i<counter;i++){
        cout<<"Product: "<<name[i]
            <<"  Quantity: "<<quantity[i]<<endl;
    }
}

int main(){

    Product P;

    P.initProduct();

    P.setData();
    P.setData();
    P.setData();

    P.displayData();

}