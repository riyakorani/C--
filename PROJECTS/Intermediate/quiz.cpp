#include<iostream>
using namespace std;

class Quiz{
    int score = 0;

public:

    void question1(){
        int ans;

        cout<<"What is 2 + 2 ?"<<endl;
        cout<<"1. 3"<<endl;
        cout<<"2. 4"<<endl;
        cout<<"3. 5"<<endl;

        cin>>ans;

        if(ans == 2){
            score++;
        }
    }

    void showScore(){
        cout<<"Your Score: "<<score<<endl;
    }
};

int main(){

    Quiz q;

    q.question1();
    q.showScore();

    return 0;
}