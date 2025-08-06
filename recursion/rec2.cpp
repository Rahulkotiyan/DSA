#include<bits/stdc++.h>
using namespace std;

void summation(int n,int sum)
{
    if(n<1)
    {
        cout<<sum<<endl;
        return;
    }
    summation(n-1,sum+n);
}

int summation1(int n)
{
    if(n==0)
        return 0;
    return n+summation1(n-1);    
}

int factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    return n*factorial(n-1);    
}

int main()
{
    cout<<factorial(5);
    return 0;
}