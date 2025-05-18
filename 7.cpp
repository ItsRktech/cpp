// sum of series 1! + 2! + 3! + ... + n!
#include<iostream>
using namespace std;

int fact(int n)
{
    int s,f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
        s+=f;
    }
    return s;
}

int main()
{
    int n1,s1;
    cout<<"Enter upto how many numbers you want to calculate the series:"<<endl;
    cin>>n1;
    s1=fact(n1);
    cout<<"Sum = "<<s1<<endl;
    return 0;
}