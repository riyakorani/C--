#include<iostream>
using namespace std;

int main(){

    string word = "code";
    string guess;
    int attempts = 5;

    while(attempts > 0){

        cout<<"Guess the word: ";
        cin>>guess;

        if(guess == word){
            cout<<"You won!\n";
            break;
        }
        else{
            attempts--;
            cout<<"Wrong! Attempts left: "<<attempts<<endl;
        }
    }

    if(attempts == 0){
        cout<<"Game over! Word was: "<<word;
    }

    return 0;
}