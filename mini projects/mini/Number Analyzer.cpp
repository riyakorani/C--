#include<iostream>
using namespace std;

class Number{
    int n;

public:
    void setData(){
        cout<<"Enter number: ";
        cin>>n;
    }

    void checkEven(){
        if(n%2==0) cout<<"Even\n";
        else cout<<"Odd\n";
    }

    void factorial(){
        int f=1;
        for(int i=1;i<=n;i++)
            f*=i;

        cout<<"Factorial = "<<f<<endl;
    }
};

int main(){
    Number num;

    num.setData();
    num.checkEven();
    num.factorial();

    return 0;

}