//Program to compute number o subarrays with xor and k


#include<bits/stdc++.h>
using namespace std;
int subArray(int a[],int n,int k)
{
    int xr=0;
    map<int,int> mpp;
    mpp[xr]++;
    int counter=0;
    for(int i=0;i<n;i++)
    {
        xr=xr^a[i];
        int x=xr^k;
        counter += mpp[x];
        mpp[xr]++;
    }
    return counter;
}
int main()
{
    int a[100];
    int n;
    int k;
    cout<<"Size of the array:"<<endl;
    cin>>n;
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the target:"<<endl;
    cin>>k;
    int res= subArray(a,n,k);
    cout<<"The count of subarray:"<<" "<<res;
    return 0;
}