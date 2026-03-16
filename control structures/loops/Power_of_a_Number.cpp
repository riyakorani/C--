// #include<iostream>
// using namespace std;

// int main(){
//     int power,base;
//     int result = 1;

//     cout<<"Enter base  = ";
//     cin>>base;

//     cout<<"Enter power = ";
//     cin>>power;

//     for(int i =1;i<=power;i++){
//         result=result*base;
//     }

//     cout<<" Result = "<<result;
//     return 0;
// }

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int base;
    int power;
    
    cout<<"Enter base = ";
    cin>>base;

    cout<<"Enter power = ";
    cin>>power;

    int result = pow(base,power);

    cout<<"Result = "<<result;
    return 0;
}