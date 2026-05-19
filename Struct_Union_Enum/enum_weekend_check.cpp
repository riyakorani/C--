#include<iostream>
using namespace std;

int main(){
    enum days { Mon, Tue, Wed, Thu, Fri, Sat, Sun };

     days today = Sat;

     if(today == Sat|| today == Sun){
        cout<<"Weekend";
     }else{
        cout<<"Workday";
     }

    
    return 0;
}