//example of function overloading
#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
float add(float c, float d)
{
    return c + d;
}
int add(int e,int f, int g)
{
    return e + f + g;
}
int main()
{
    int a1=5,b1=10;
    cout<<"Sum of two integers: " << add(a1, b1) << endl;
    float c1=5.5,d1=10.5;
    cout<<"Sum of two floats: " << add(c1, d1) << endl;
    int e1=5,f1=10,g1=15;
    cout<<"Sum of three integers: " << add(e1, f1, g1) << endl;
    return 0;
}