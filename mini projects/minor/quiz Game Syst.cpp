#include<iostream>
using namespace std;

class Quiz{
    int score;

public:
    void start(){
        score = 0;

        int ans;

        cout<<"Capital of India?\n";
        cout<<"1 Delhi\n2 Mumbai\n";
        cin>>ans;

        if(ans==1) score++;

        cout<<"2 + 2 = ?\n";
        cout<<"1 3\n2 4\n";
        cin>>ans;

        if(ans==2) score++;
    }

    void result(){
        cout<<"Your Score = "<<score<<endl;
    }
};

int main(){
    Quiz q;

    q.start();
    q.result();

    return 0;
}