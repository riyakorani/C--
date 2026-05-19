#include<iostream>
using namespace std;

int main(){
    int binary;
    int decimal = 0;
    int base = 1;

    cout<<"Enter a binary number = ";
    cin>>binary;

    while(binary>0){
        int lastDigit = binary%10;
        decimal = decimal+lastDigit*base;
        base = base*2;
        binary = binary/10;

    }

    cout<<"Decimal number  = "<<decimal;
    
    return 0;
}




#include<iostream>
using namespace std;

int main(){
    string binary;
    int decimal = 0;
    int base = 1;

    cout<<"Enter a binary number = ";
    cin>>binary;

    for(int i = binary.length() - 1; i >= 0; i--){
        if(binary[i] == '1'){
            decimal += base;
        }
        else if(binary[i] != '0'){
            cout << "Invalid binary number";
            return 0;
        }
        base *= 2;
    }

    cout<<"Decimal number = "<<decimal;

    return 0;
}