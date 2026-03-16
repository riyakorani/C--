#include<iostream>
using namespace std;

class Test
{
    int x;

public:
    Test()
    {
        x = 100;
    }

    void print()
    {
        cout << "x = " << x << endl;
    }
};

int main()
{
    Test t1, t2, t3;

    t1.print();
    t2.print();
    t3.print();
}