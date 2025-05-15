//to calculate area and perimeter of rectangle
#include <iostream>
using namespace std;

int main()
{
    int l,b,a,p;
    cout<<"Enter length and breadth of rectangle:"<<endl;
    cin>>l>>b;
    a= l*b;
    p= 2*(l+b);
    cout<<"Area of rectangle is:"<<a<<endl;
    cout<<"Perimeter of rectangle is:"<<p<<endl;
    return 0;
}