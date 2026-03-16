#include<iostream>
using namespace std;

class Vote{
    static int a,b,c;

public:
    static void voteA(){ a++; }
    static void voteB(){ b++; }
    static void voteC(){ c++; }

    static void result(){
        cout<<"Alice votes: "<<a<<endl;
        cout<<"Bob votes: "<<b<<endl;
        cout<<"Charlie votes: "<<c<<endl;
    }
};

int Vote::a=0;
int Vote::b=0;
int Vote::c=0;

int main(){
    int choice;

    for(int i=0;i<5;i++){
        cout<<"1 Alice\n2 Bob\n3 Charlie\n";
        cin>>choice;

        if(choice==1) Vote::voteA();
        else if(choice==2) Vote::voteB();
        else Vote::voteC();
    }

    Vote::result();

      return 0;
}