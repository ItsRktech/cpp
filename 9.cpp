//calculate area and perimeter of rectangle in a function and display the result in main function
#include<iostream>
using namespace std;
void rectangle(int l, int b, int &a, int &p)
{
    a=l*b;
    p=2*(l+b);
}

int main()
{
    int l1,b1,a1,p1;
    cout<<"Enter length and breadth of rectangle:"<<endl;
    cin>>l1>>b1;
    rectangle(l1,b1,a1,p1);
    cout<<"Area ="<<a1<<endl<<"Perimeter ="<<p1<<endl;
    return 0;
}
