#include<iostream>
using namespace std;

class Rectangle{
    int length,width;

public:
    void setData(){
        cout<<"Enter length and width: ";
        cin>>length>>width;
    }

    void area(){
        cout<<"Area = "<<length*width<<endl;
    }
};

int main(){
    Rectangle r;

    r.setData();
    r.area();

    return 0;
}
