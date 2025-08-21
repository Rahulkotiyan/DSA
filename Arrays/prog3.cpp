//program to merge 2 sorted array(optimal solution 1)

#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int b[],int n,int m)
{
    int left=n-1;
    int right=0;
    while(left>=0 && right<m)
    {
        if(a[left]>b[right])
        {
            swap(a[left],b[right]);
            left--;
            right++;
        }
        else
        {
            break;;
        }
    }
    sort(a,a+n);
    sort(b,b+m);
    cout<<"The sorted array  is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<m;i++)
    {
        cout<<b[i]<<" ";
    }
}

int main()
{
    int a[100],b[100];
    int n,m;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Enter the value of m:"<<endl;
    cin>>m;
    cout<<"Enter 1st array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the 2nd array:"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    merge(a,b,n,m);
    return 0;
}