#include<iostream>
using namespace std;

class Shop {
private:
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void init(){
        counter = 0;
    }

    void addItem(){
        cout << "Enter id = ";
        cin >> itemId[counter];

        cout << "Enter price = ";
        cin >> itemPrice[counter];

        counter++;
    }

    void maxPrice(){
        int maxIndex = 0;

        for(int i = 1; i < counter; i++){
            if(itemPrice[i] > itemPrice[maxIndex]){
                maxIndex = i;
            }
        }

        cout << "Most expensive item ID = "
             << itemId[maxIndex]
             << " Price = "
             << itemPrice[maxIndex];
    }
};

int main(){
    Shop s;
    s.init();

    int n;
    cout << "Enter number of items = ";
    cin >> n;

    for(int i = 0; i < n; i++){
        s.addItem();
    }

    s.maxPrice();

    return 0;
}