#include<iostream>
using namespace std;

int main(){
    int n;
    int fact = 1;

    cout<<"Enter number = ";
    cin>>n;

    for(int i=1;i<=n;i++){
        fact = fact*i;
    }

    cout<<"Factorial of " <<n<<" is "<<fact;
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int num;
    int factorial=1;

    cout<<"Enter a number = ";
    cin>>num;

    int i=1;
    while(i<=num){
        factorial=factorial*i;
        i++;
    }
    cout<<"Factorial of " <<num<<" is "<<factorial;
    return 0;
}