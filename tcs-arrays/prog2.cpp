//program to reverse an array

#include<bits/stdc++.h>
using namespace std;

void revArr(int arr[],int n)
{
    int p1=0;
    int p2=n-1;
    while(p1<p2)
    {
        swap(arr[p1],arr[p2]);
        p1++;
        p2--;
    }
}

int main()
{
    int n,arr[100];
    cout<<"Enter the size:"<<endl;
    cin>>n;
    cout<<"Enter the elements into array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
}
    revArr(arr,n);
    cout<<"After reversal:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}



{/*
    other approaches include:
    1. using extra array :
        ans[n-i-1] = arr[i];
    2. recursion:
        swap(arr[start],arr[end])
        reverseArray(arr,start+1,end-1)
    3. library function:
        reverseArray(arr,n)
        {
        reverse(arr,arr+n)
        }
*/}