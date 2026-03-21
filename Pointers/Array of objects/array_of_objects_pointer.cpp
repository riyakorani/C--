#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;

public:
    void setData(int a,int b){
        real = a;
        imaginary = b;
    }

    void getData(){
        cout<<"Real: "<<real<<endl;
        cout<<"Imaginary: "<<imaginary<<endl;
    }
};

int main(){

    Complex *ptr = new Complex[3];

    for(int i=0;i<3;i++){
        ptr[i].setData(i+1,i+2);
    }

    for(int i=0;i<3;i++){
        ptr[i].getData();
    }

}