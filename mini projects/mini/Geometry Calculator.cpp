#include<iostream>
using namespace std;

class Geometry{

public:
    void rectangle(){
        int l,w;
        cout<<"Enter length and width: ";
        cin>>l>>w;

        cout<<"Area = "<<l*w<<endl;
    }

    void circle(){
        float r;
        cout<<"Enter radius: ";
        cin>>r;

        cout<<"Area = "<<3.14*r*r<<endl;
    }
};

int main(){
    Geometry g;
    int choice;

    cout<<"1 Rectangle\n2 Circle\n";
    cin>>choice;

    if(choice==1)
        g.rectangle();
    else
        g.circle();

    return 0;
}