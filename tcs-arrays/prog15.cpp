//sorting the elements of an array by frequency

#include<bits/stdc++.h>
using namespace std;

void sort2darray(int array2d[2][100],int k)
{
    for(int i=0;i<k-1;i++)
    {
        for(int j=0;j<k-1-i;j++)
        {
            if(array2d[1][j]<array2d[1][j+1])
            {
                swap(array2d[1][j],array2d[1][j+1]);
                swap(array2d[0][j],array2d[0][j+1]);
            }
        }
    }
}

void sortElement(int arr[],int n)
{
    sort(arr,arr+n);
    int arr2d[2][100];
    int k=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            arr2d[0][k]=arr[i];
            count=1;
        }
        else if(arr[i]==arr[i-1])
        {
            count++;
        }
        else
        {
            arr2d[1][k] = count;
            count=1;
            k++;
            arr2d[0][k] = arr[i];
        }
    }
    arr2d[1][k] = count;
    k++;
    sort2darray(arr2d,k);
    k=0;
    int i=0;
    while(i<n)
    {
        while(arr2d[1][k]>0)
        {
            arr[i]= arr2d[0][k];
            i++;
            arr2d[1][k]--;
        }
        k++;
    }
}

int main()
{
    int n=8;
    int arr[]={1,2,3,2,4,3,1,2};
    sortElement(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}