#include<iostream>
using namespace std;

class Hello
{
public:
    Hello()
    {
        cout << "Constructor Called!" << endl;
    }
};

int main()
{
    Hello h1;
}