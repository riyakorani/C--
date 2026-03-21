#include<iostream>
using namespace std;

class Number{
    int value;

public:
    void setValue(int v){
        value = v;
    }

    void show(){
        cout<<"Value: "<<value<<endl;
    }
};

int main(){

    Number *ptr = new Number[3];
    Number *temp = ptr;

    for(int i=0;i<3;i++){
        ptr->setValue(i+10);
        ptr++;
    }

    for(int i=0;i<3;i++){
        temp->show();
        temp++;
    }

    delete[] temp;

    return 0;
}