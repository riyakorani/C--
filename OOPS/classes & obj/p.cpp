#include<iostream>
using namespace std;

class employee{
  private:
  int a,b,c;

  public:
  int d,e;


  void setData(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
  }

  void getdata(){
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
        cout << "d = " << d << endl;
        cout << "e = " << e << endl;
  }

  void sum(){
     cout << "Sum of a, b, c = " << (a + b + c) << endl;
  }

  int getA(){
    return a;
  }

  void compare(employee obj){
     if (a > obj.a) {
            cout << "Current object's a is greater\n";
        } else {
            cout << "Other object's a is greater\n";
        }
  }

  
};

int main(){
    employee Riya,Aman,Akshat;

    //Riya
    Riya.setData(10,20,30);
    Riya.d = 40;
    Riya.e = 50;
    
    

    //Aman:
    Aman.setData(1,2,3);
    Aman.d = 4;
    Aman.e = 5;

    //Akshat
    Akshat.setData(100,200,300);
    Akshat.d = 400;
    Akshat.e = 500;


    //get data:

   cout<<"\nRiya Data = \n";
   Riya.getdata();
   Riya.sum();

   cout<<"\nAman Data = \n";
   Aman.getdata();
   Aman.sum();

   cout<<"\nAkshat Data = \n";
   Akshat.getdata();
   Akshat.sum();


   //comparision:
   cout << "\nComparison:" << endl;
    employee max = Riya;

    if (Aman.getA() > max.getA())
        max = Aman;

    if (Akshat.getA() > max.getA() )
        max = Akshat;

    cout << "Greatest a is " << max.getA();

   
    return 0;
}