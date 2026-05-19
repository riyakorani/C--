#include<iostream>
using namespace std;

int sum(float a, int b){
    cout << "Using function with 2 arguments" << endl;
    return a + b;
}

int sum(int a, int b, int c){
    cout << "Using function with 3 arguments" << endl;
    return a + b + c;
}

// Cylinder
double volume(double r, int h){
    return 3.14 * r * r * h;
}

// Cube
int volume(int a){
    return a * a * a;
}

// Cuboid
int volume(int l, int b, int h){
    return l * b * h;
}

int main(){
    cout << "Sum: " << sum(3, 6) << endl;
    cout << "Sum: " << sum(3, 7, 6) << endl;

    cout << "Cuboid volume: " << volume(3, 7, 6) << endl;
    cout << "Cylinder volume: " << volume(3.0, 6) << endl;
    cout << "Cube volume: " << volume(3) << endl;

    return 0;
}