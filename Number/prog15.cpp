//program to find factors of a number

#include<bits/stdc++.h>
using namespace std;

void factorial(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i == 0)
        {
            cout<<i<<endl;;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<"The factorial are:"<<endl;
    factorial(n);
}

{/*
    optimal approach:

    void factoral(int n)
    {
    for(int i=1;i<=sqrt(n);i++)
    {
    if(n%i==0)
    {
    if(n/i == i)
        cout<<" "<<i;
    else
        cout<<" "<<i<<" "<<n/i;
    }
    }
    }
    
    */}