 #include<iostream>
using namespace std;

void print(int a){
    cout << "Integer: " << a << endl;
}

void print(double a){
    cout << "Double: " << a << endl;
}

void print(string a){
    cout << "String: " << a << endl;
}

int main(){
    print(10);
    print(5.5);
    print("Hello");

    return 0;
}