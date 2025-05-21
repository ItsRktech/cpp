//calculate volume of cube,cuboid and cylinder using function overloading
#include <iostream>
using namespace std;
int volume(int l)
{
    return l * l * l;
}

int volume(int l, int b, int h)
{
    return l * b * h;
}

float volume(float r, float h)
{
    return 3.14 * r * r * h;
}

int main()
{
    int l, b, h;
    cout << "Enter length of cube: ";
    cin >> l;
    cout << "Volume of cube: " << volume(l) << endl;

    cout << "Enter length, breadth and height of cuboid: ";
    cin >> l >> b >> h;
    cout << "Volume of cuboid: " << volume(l, b, h) << endl;

    float r;
    cout << "Enter radius and height of cylinder: ";
    cin >> r >> h;
    cout << "Volume of cylinder: " << volume(r, h) << endl;

    return 0;
}