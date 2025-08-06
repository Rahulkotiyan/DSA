#include<bits/stdc++.h>
using namespace std;
int counter=0;
void name(string s,int n)
{
    if(counter == n)
     return;
    cout<<s<<" ";
    counter++;
    name(s,n);
}

void revlinear(int n)
{
    if(n==0)
    return;
    cout<<n<<" ";
    revlinear(n-1);
}


void linear(int i,int n)
{
    if(i>n)
    return;
    cout<<i<<" ";
    linear(i+1,n);
}

void back(int i,int n)
{
    if(i<1)
    return;
    back(i-1,n);
    cout<<i<<" ";
}

void backrev(int i,int n)
{
    if(i>n)
     return;
    backrev(i+1,n);
    cout<<i<<" "; 
}


int main()
{
    backrev(1,5);
    return 0;
}