#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

    int user, computer;

    srand(time(0));
    computer = rand() % 3 + 1;

    cout<<"1. Rock\n2. Paper\n3. Scissors\n";
    cout<<"Enter your choice: ";
    cin>>user;

    cout<<"Computer choice: "<<computer<<endl;

    if(user == computer){
        cout<<"Draw!";
    }
    else if((user==1 && computer==3) || 
            (user==2 && computer==1) || 
            (user==3 && computer==2)){
        cout<<"You win!";
    }
    else{
        cout<<"Computer wins!";
    }

    return 0;
}