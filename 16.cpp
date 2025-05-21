//program to calculate simple interest using inline function and putting default value of rate to 15%
#include <iostream>
using namespace std;
inline void interest(float p, float t, float r = 15)
{
    float i = (p * t * r) / 100;
    cout << "Simple Interest = " << i << endl;
}
int main()
{
    float p1,t1;
    cout << "Enter Principal and Time: ";
    cin >> p1 >> t1;
    interest(p1, t1);
    return 0;
}
