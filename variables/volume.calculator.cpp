#include <iostream>
using namespace std;

int main() {
    const float PI = 3.14159;
    float a, l, b, h, r;
    float volume_cube, volume_cuboid, volume_cylinder;

    // Cube
    cout << "Enter side of cube: ";
    cin >> a;
    volume_cube = a * a * a;

    // Cuboid
    cout << "Enter length, breadth, height of cuboid: ";
    cin >> l >> b >> h;
    volume_cuboid = l * b * h;

    // Cylinder
    cout << "Enter radius and height of cylinder: ";
    cin >> r >> h;
    volume_cylinder = PI * r * r * h;

    cout << "\nVolume of cube = " << volume_cube << endl;
    cout << "Volume of cuboid = " << volume_cuboid << endl;
    cout << "Volume of cylinder = " << volume_cylinder << endl;

    return 0;
}
