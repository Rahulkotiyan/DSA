//program to perform heap sort

#include<bits/stdc++.h>
#define maxSize 20;
using namespace std;

void adjust(int i,int n,int a[])
{
    int j,item;
    j=2*i;
    item=a[i];
    while(j<=n)
    {
        if((j<n)&&(a[j]<a[j+1]))
            j++;
        if(item>=a[j])
            break;
        else
        {
            a[j/2] = a[j];
            j=2*j;
        }
    }
    a[j/2]=item;
}
void heapify(int n,int a[])
{
    int i;
    for(i=n/2;i>0;i--)
        adjust(i,n,a);
}
void heapsort(int n,int a[])
{
    int temp,i;
    heapify(n,a);
    for(i=n;i>0;i--)
    {
        temp=a[i];
        a[i]=a[1];
        a[1]=temp;
        adjust(1,i-1,a);
    }
}
int main()
{
    int i,n,a[20];
    cout<<"Enter array size:"<<endl;
    cin>>n;
    cout<<"Enter the array elements:"<<endl;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    heapsort(n,a);
    cout<<"The sorted elements are:"<<endl;
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
}
