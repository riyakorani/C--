#include<iostream>
using namespace std;

class Shop {
private:
    int price[100];
    int counter;

public:
    void init(){
        counter = 0;
    }

    void addPrice(){
        cout << "Enter price = ";
        cin >> price[counter];
        counter++;
    }

    void totalBill(){
        int sum = 0;

        for(int i = 0; i < counter; i++){
            sum += price[i];
        }

        cout << "Total bill = " << sum;
    }
};

int main(){
    Shop s;
    s.init();

    int n;
    cout << "Enter number of items = ";
    cin >> n;

    for(int i = 0; i < n; i++){
        s.addPrice();
    }

    s.totalBill();

    return 0;
}