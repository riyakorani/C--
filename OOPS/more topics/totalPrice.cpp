#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
    void totalPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];

    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];

    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id "
             << itemId[i]
             << " is "
             << itemPrice[i]
             << endl;
    }
}

void Shop ::totalPrice(void)
{
    int total = 0;

    for(int i=0;i<counter;i++)
    {
        total = total + itemPrice[i];
    }

    cout<<"Total Price = "<<total<<endl;
}

int main()
{
    Shop dukaan;

    dukaan.initCounter();

    for(int i=0;i<5;i++)
    {
        dukaan.setPrice();
    }

    dukaan.displayPrice();
    dukaan.totalPrice();

    return 0;
}
