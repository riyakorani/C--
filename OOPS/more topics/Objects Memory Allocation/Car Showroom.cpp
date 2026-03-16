#include<iostream>
using namespace std;

class Car{

    string name[50];
    int price[50];
    int counter;

public:
    void initCar(){ counter = 0; }
    void setData(void);
    void displayData(void);
};

void Car::setData(){

    cout<<"Enter car name "<<counter+1<<": ";
    cin>>name[counter];

    cout<<"Enter car price: ";
    cin>>price[counter];

    counter++;
}

void Car::displayData(){

    for(int i=0;i<counter;i++){
        cout<<"Car Name: "<<name[i]
            <<"  Price: "<<price[i]<<endl;
    }
}

int main(){

    Car C;

    C.initCar();

    C.setData();
    C.setData();
    C.setData();

    C.displayData();

}