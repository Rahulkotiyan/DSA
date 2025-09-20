//program to find fibonacci number

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if(n<=1)
        return n;
    int last  = fibonacci(n-1);
    int slast = fibonacci(n-2);
    return last+slast;
}


int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        int res = fibonacci(i);
        cout<<res<<" ";
    }
    return 0;
}


{/*
    int fact(int n) 
    {
    if(n==0)
        return 1;
    return (n*fact(n-1)); 
    }   
    */}