//to convert degree celsius to degree fahrenheit
#include <iostream>
using namespace std;
int main()
{
    float c,f;
    cout<<"Enter temperature in Celsius:";
    cin>>c;
    f = 1.8*c + 32;
    cout<<"Temperature in Fahrenheit is:"<<f;
    return 0;
}