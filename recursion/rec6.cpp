#include<bits/stdc++.h>
using namespace std;

int fibonaacci(int n)
{
    if( n ==1)
        return 0;
    if(n==2)
        return 1;
    return fibonaacci(n-1)+fibonaacci(n-2);
}

int main()
{
    cout<<fibonaacci(5);
        return 0;
}