#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class binary
{
private:
    string s;

public:
    void read();
    void chk_bin();
    void ones_complement();
    void display();
};

void binary::read()
{
    cout << "Enter a binary number: ";
    cin >> s;
}

void binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::ones_complement()
{
    chk_bin(); // nested function call

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
}

void binary::display()
{
    cout << "Binary number: " << s << endl;
}

int main()
{
    binary b;

    b.read();
    b.display();

    b.ones_complement();
    b.display();
}