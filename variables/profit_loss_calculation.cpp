#include <iostream>
using namespace std;

int main() {
    float costPrice, sellingPrice, amount;
    
    cout << "Enter Cost Price = ";
    cin >> costPrice;

    cout << "Enter Selling Price = ";
    cin >> sellingPrice;

    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        cout << "Profit = " << amount << endl;
    } else if (costPrice > sellingPrice) {
        amount = costPrice - sellingPrice;
        cout << "Loss = " << amount << endl;
    } else {
        cout << "No Profit, No Loss" << endl;
    }

    return 0;
}
