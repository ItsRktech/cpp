//example of return by reference in c++
#include <iostream>
using namespace std;

int &max(int &x, int &y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    int x1 = 10, y1 = 20;
    max(x1,y1) = 1; //1 is a reference value
    cout << "x1 = " << x1 << endl<<"y1 = " << y1 << endl;
    return 0;
}