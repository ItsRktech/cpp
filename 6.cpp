#include<iostream>
using namespace std;

int sum(int n)
{
    int s;
    for(int i=1;i<=n;i++)
    {
        s+=i;
    }
    return s;
}

int main()
{
    int n1;
    cout<<"Enter upto how many numbers you want to calculate sum:"<<endl;
    cin>>n1;
    sum(n1);
    cout<<"Sum = "<<sum(n1)<<endl;
    return 0;
}