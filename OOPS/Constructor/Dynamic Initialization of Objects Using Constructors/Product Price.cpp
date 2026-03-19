#include<iostream>
using namespace std;

class Product{
    int price;
    int quantity;

public:
    Product(int p, int q){
        price = p;
        quantity = q;
    }

    void total(){
        cout<<"Total price = "<<price*quantity<<endl;
    }
};

int main(){

    int p,q;

    cout<<"Enter price and quantity: ";
    cin>>p>>q;

    Product p1(p,q);   // Dynamic initialization

    p1.total();

    return 0;
}