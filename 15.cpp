//example of default arguments
#include<iostream>
using namespace std;

float interest(float p, float t, float r = 10.0)
{
    float i = (p * t * r) / 100;
    return i;
}

int main()
{
    float p1,t1,i1;
    cout<<"Enter Principal and Time: "<<endl;
    cin>>p1>>t1;
    i1 = interest(p1, t1);
    cout<<"Simple Interest = "<<i1<<endl;
    return 0;
}
