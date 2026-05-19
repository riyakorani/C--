#include<iostream>
using namespace std;

class Shop {
private:
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(){
        counter = 0;
    }

    void addItem(){
        cout << "Enter item id = ";
        cin >> itemId[counter];

        cout << "Enter item price = ";
        cin >> itemPrice[counter];

        counter++;
    }

    void displayItems(){
        for(int i = 0; i < counter; i++){
            cout << "Item " << itemId[i]
                 << " Price = " << itemPrice[i] << endl;
        }
    }
};

int main(){
    Shop s;
    s.initCounter();

    int n;
    cout << "How many items? ";
    cin >> n;

    for(int i = 0; i < n; i++){
        s.addItem();
    }

    cout << "\n--- Item List ---\n";
    s.displayItems();

    return 0;
}