#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter a number = ";
    cin>>num;

    cout<<"factors of "<<num<<" are = ";

    for(int i=1;i<=num;i++){
        if(num%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}


#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number = ";
    cin>>num;

    cout<<"Factors are = ";

    for(int i = 1; i <= sqrt(num); i++){
        if(num % i == 0){
            cout << i << " ";

            if(i != num / i){
                cout << num / i << " ";
            }
        }
    }

    return 0;
}