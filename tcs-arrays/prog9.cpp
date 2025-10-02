//Adding elements to an array
//an vector concept can be used to push the elements

#include<bits/stdc++.h>
using namespace std;

void insertatbegin(int* arr,int n,int value)
{
    for(int i=n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]= value;
}

void insertatEnd(int* arr,int n,int value)
{
    arr[n] = value;
}

void insertatposition(int* arr,int n,int value,int pos)
{
    for(int i=n;i>=pos;i++)
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1]=value;
}

int main()
{
    int n,arr[100],value,pos;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position:"<<endl;
    cin>>pos;
    cout<<"Enter the value:"<<endl;
    cin>>value;
    insertatbegin(arr,n,value);
    //insertatEnd(arr,n,value);
    //insertatposition(arr,n,value,pos);
    return 0;
}