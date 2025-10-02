#include<bits/stdc++.h>
using namespace std;

int XOR(int arr[],int n)
{
    int prod=1;
    for(int i=0;i<n;i++)
    {
        prod = prod^arr[i];
    }
    return prod;
}

int main()
{
    int n;
    int a[100];
    cout<<"Enter the size:"<<endl;
    cin>>n;
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int result = XOR(a,n);
    cout<<"The result is: "<<result;
    return 0;
}