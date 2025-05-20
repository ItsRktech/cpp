//calculate simple interest using inline function
#include <iostream>
using namespace std;

inline void interest(float p, float t, float r)
{
    float i = (p * t * r) / 100;
    cout << "Simple Interest = " << i << endl;
}

int main()
{
    float p1,t1,r1;
    cout << "Enter Principal, Time and Rate: ";
    cin >> p1 >> t1 >> r1;
    interest(p1, t1, r1);
    return 0;
}