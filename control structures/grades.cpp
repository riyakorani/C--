#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks(1-100) = ";
    cin>>marks;

    if(marks>=80 && marks<=100){
        cout<<"Grade A";
    } else if(marks>=60 && marks<80){
        cout<<"Grade B";
    }else if(marks>=50 && marks<60){
        cout<<"Grade C";
    }else{
        cout<<"Grade F";
    }

    return 0;
}