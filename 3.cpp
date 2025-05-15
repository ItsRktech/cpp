//to find area and perimeter of circle

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float r,a,p;
    const float pi = 3.14;
    cout<<"Enter radius of circle:"<<endl;
    cin>>r;
    a = pi*pow(r,2);
    p = 2*pi*r;
    cout<<"Area of circle is:"<<a<<endl<<"Perimeter of circle is:"<<p<<endl;
    return 0;
}
