//program to find permutations in which N people can occupy R seats
#include<bits/stdc++.h>
using namespace std;


int factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    return (n*factorial(n-1));
}

int perm(int n,int r)
{
    return ((factorial(n)/factorial(n-r)));
}

int main()
{
    int n,r;
    cout<<"Enter N";
    cin>>n;
    cout<<"Enter r";
    cin>>r;
    int permutation= perm(n,r);
    cout<<"The permutation is :"<<permutation;
    return 0;
}