#include<bits/stdc++.h>
using namespace std;
//if zero is to be included iterate from 0th position else iterate from 1st position
int missing(int a[],int n)
{
    int hash[n+1]={0};
    for(int i=1;i<=n-1;i++)
    {
        hash[a[i]]=1;
    }
    for(int i=1;i<=n+1;i++)
    {
        if(hash[i]==0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int a[100], n;
    cout << "Enter the size of array" << " ";
    cin >> n;
    cout << "Enter the elements into array" << " ";
    for (int i = 1; i <= n-1; i++)
    {
        cin >> a[i];
    }
    int ind = missing(a,n);
    cout<<"Missig element is:"<<""<<ind;
    return 0;
}