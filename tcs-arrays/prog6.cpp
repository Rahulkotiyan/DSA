//Rotate array by K elements 

//using block swap algorithm

#include<bits/stdc++.h>
using namespace std;

void swap(int arr[],int a,int b,int k)
{
    for(int i=0;i<k;i++)
    {
        int temp = arr[a+i];
        arr[a+i] = arr[b+i];
        arr[b+i] = temp;
    }
}

void blockSwap(int arr[],int k,int n)
{
    if(k==0 || k==n)
        return;
    if(k==n-k)
    {
        swap(arr,0,n-k,k);
        return;
    }
    else if(k<n-k)
    {
        swap(arr,0,n-k,k);
        blockSwap(arr,k,n-k);
    }
    else
    {
        swap(arr,0,k,n-k);
        blockSwap(arr+n-k,2*k-n,k);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 2;
    blockSwap(arr, k, n);
    cout << "After Rotating the array " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}