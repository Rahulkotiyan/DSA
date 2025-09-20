//program to find power of the number

#include<bits/stdc++.h>
using namespace std;

int power(int x,int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans =  ans*x;
    }
    return ans;
}

int main()
{
    int x,n;
    cout<<"Enter the number:"<<endl;
    cin>>x;
    cout<<"Enter the power:"<<endl;
    cin>>n;
    int res = power(x,n);
    cout<<"The result is:"<<res;
    return 0;
}