#include<bits/stdc++.h>
using namespace std;
int largest(int a[100],int n)
{
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int main()
{
    int a[100],n;
    cout<<"Enter the size of array"<<" ";
    cin>>n;
    cout<<"Enter the elements into array"<<" ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int largestEl = largest(a,n);
    cout<<"The largest number is:"<<largestEl<<endl;
    return 0; 
}
