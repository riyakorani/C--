#include<iostream>
using namespace std;

int main(){

    int choice;
    float value;

    cout<<"--- Unit Converter ---"<<endl;

    cout<<"1. KM to M"<<endl;
    cout<<"2. KG to G"<<endl;
    cout<<"3. Celsius to Fahrenheit"<<endl;

    cout<<"Enter choice: ";
    cin>>choice;

    cout<<"Enter value: ";
    cin>>value;

    switch(choice){

        case 1:
            cout<<"Meters: "<<value*1000;
            break;

        case 2:
            cout<<"Grams: "<<value*1000;
            break;

        case 3:
            cout<<"Fahrenheit: "<<(value*9/5)+32;
            break;

        default:
            cout<<"Invalid choice";
    }

    return 0;
}