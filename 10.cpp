// Program to find area and circumference of a circle using function with reference arguments
#include<iostream>
using namespace std;

void circle(float r, float &a, float &c)
{
    const float pi = 3.14;
    a = pi*r*r;
    c = 2*pi*r;
}

int main()
{
    float r1,a1,c1;
    cout << "Enter radius of circle:" << endl;
    cin >> r1;
    circle(r1, a1, c1);
    cout << "Area = " << a1 << endl << "Circumference = " << c1 << endl;
    return 0;
}