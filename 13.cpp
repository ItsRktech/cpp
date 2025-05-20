//example of inline function in c++
#include <iostream>
using namespace std;

inline void add(int x, int y)
{
    cout << "Sum = " << x + y << endl;
}

int main()
{
    int a1, b1;
    cout << "Enter two numbers: ";
    cin >> a1 >> b1;
    add(a1, b1);
    return 0;
}