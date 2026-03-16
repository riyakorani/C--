#include<iostream>
using namespace std;

class complex 
{
    int real;
    int img;

 public:
     void setData(int a1,int b1){
        real = a1;
        img  = b1;
     }

     void addComplex(complex c1,complex c2){
        real = c1.real+c2.real;
        img  = c1.img+c2.img;
     }

     void Print(){
        cout<<"Complex no = "<<real<<" + "<<img<<" i "<<endl;
     }

};

int main(){
    complex c1,c2,c3;

    c1.setData(2,3);
    c2.setData(6,4);

    c3.addComplex(c1,c2);

    c1.Print();
    c2.Print();
    c3.Print();

    return 0;
}





