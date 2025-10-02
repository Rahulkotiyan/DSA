//program to perform binary search 

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int n,int key)
{
    int low,high,mid;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            return mid+1;
        }
        else if(key<a[mid])
            high=mid-1;
        else 
            low=mid+1;
    }
    return -1;
}

int main()
{
    int n,key;
    int a[100];
    cout<<"Enter the size:"<<endl;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the key element:"<<endl;
    cin>>key;
    int result = binarySearch(a,n,key);
    if(result == -1)
        cout<<"Unsuccessful search ";
    else
        cout<<"The element found at position: "<<result;
    return 0;
}



{/*
    
    recursive program :

    int binarySearch(int a[],int key,int low,int high)
    {
        int mid;
        if(low>high)
            return -1;
        mid = low+high/2;
        if(key==a[mid])
            return mid+1;
        if(key<a[mid])
            return binarySearch(a,key,low,mid-1);
        return binarySearch(a,key,mid+1,high);
    }
    
    
    */}