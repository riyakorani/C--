#include<iostream>
using namespace std;

int main(){
    float r;
    const float PI=3.14;

    cout<<"Enter radius = ";
    cin>>r;

    cout<<"Area is = "<<PI*r*r<<endl;
    cout<<"Perimeter is = "<<2*PI*r<<endl;


    return 0;
}