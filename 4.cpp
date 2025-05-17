// Function to find the sum of three numbers
#include<iostream>
using namespace std;
int sum(int a, int b, int c)
{
    return (a+b+c);
}

int main()
{
    int a1,b1,c1;
    cout<<"Enter three numbers"<<endl;
    cin>>a1>>b1>>c1;
    sum(a1,b1,c1);
    cout<<"Sum = "<<sum(a1,b1,c1)<<endl;
    return 0;
}