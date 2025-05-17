// Function to calculate area and perimeter of circle
#include<iostream>
using namespace std;

void circle(float r)
{
    const float pi = 3.1416;
    float a = pi*r*r;
    float p = 2*pi*r;
    cout<<"Area of circle is:"<<a<<endl<<"Perimeter of circle is:"<<p<<endl; 
}

int main()
{
    float r1;
    cout<<"Enter radius of circle:"<<endl;
    cin>>r1;
    circle(r1);
    return 0;
}