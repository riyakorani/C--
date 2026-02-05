#include <iostream>
using namespace std;

int main() {
    float original_price, discount_percent, discount_amount, final_price;

    cout << "Enter original price: ";
    cin >> original_price;

    cout << "Enter discount percentage: ";
    cin >> discount_percent;

    discount_amount = (original_price * discount_percent) / 100;
    final_price = original_price - discount_amount;

    cout << "Discount = " << discount_amount << endl;
    cout << "Final Price = " << final_price << endl;

    return 0;
}