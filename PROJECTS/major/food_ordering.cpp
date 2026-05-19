#include<iostream>
using namespace std;

class Food{

    int total = 0;

public:

    void menu(){

        int choice;

        cout<<"1. Pizza - 200"<<endl;
        cout<<"2. Burger - 100"<<endl;
        cout<<"3. Pasta - 150"<<endl;

        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                total += 200;
                break;

            case 2:
                total += 100;
                break;

            case 3:
                total += 150;
                break;
        }

        cout<<"Total Bill: "<<total<<endl;
    }
};

int main(){

    Food f;
    f.menu();

    return 0;
}