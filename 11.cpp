//program to calculate tsa,csa and volume of a cylinder
#include <iostream>
using namespace std;

void cylinder(float r, float h, float &tsa, float &csa, float &v)
{
    const float pi = 3.14;
    tsa = 2 * pi * r * (r + h);
    csa = 2 * pi * r * h;
    v = pi * r * r * h;
}

int main()
{
    float r1, h1, tsa1, csa1, v1;
    cout << "Enter radius and height of cylinder:" << endl;
    cin >> r1 >> h1;
    cylinder(r1, h1, tsa1, csa1, v1);
    cout << "Total Surface Area = " << tsa1 << endl
         << "Curved Surface Area = " << csa1 << endl
         << "Volume = " << v1 << endl;
    return 0;
}