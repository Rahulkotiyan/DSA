//Program to replace elements by its rank in the array

#include<bits/stdc++.h>
using namespace std;

void replace(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        set<int> s;
        for(int j=0;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                s.insert(arr[j]);
            }
        }
        cout<<s.size()+1<<" ";
    }
}

void replace1(int arr[],int n)
{
    map<int,int> mp;
    int temp=1;
    int brr[n];
    for(int i=0;i<n;i++)
    {
        brr[i]=arr[i];
    }
    sort(brr,brr+n);
    for(int i=0;i<n;i++)
    {
        if(mp[brr[i]]==0)
        {
            mp[brr[i]] =temp;
            temp++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<mp[arr[i]]<<" ";
    }
}



int main()
{
    int n,arr[100];
    cout<<"Enter the size:"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    replace(arr,n);
    return 0;
}