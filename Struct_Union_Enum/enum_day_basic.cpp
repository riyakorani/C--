#include<iostream>
using namespace std;

int main(){
    enum Days  { Mon, Tue, Wed, Thu, Fri, Sat, Sun };

    Days today = Wed;

    cout << "Value of today = " << today;

    return 0;
}