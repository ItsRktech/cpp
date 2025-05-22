//example of dma
#include <iostream>
using namespace std;
int main()
{
    int *p;
    p = new int[5]; // dynamic memory allocation
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter value of p[" << i << "]: ";
        cin >> p[i];
    }
    cout << "Values of p are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    delete[] p; // deallocating memory
    return 0;
}