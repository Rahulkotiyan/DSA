#include<bits/stdc++.h>
using namespace std;

int reverseArray(int arr[],int start,int end)
{
    if(start>=end)
    {
        return 0;
    }
    swap(arr[start],arr[end]);
    return reverseArray(arr,start+1,end-1);
}

int main()
{
    int i,n;
    int arr[200];
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"Enter array elements:";
   for( i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   reverseArray(arr,0,n-1);
   cout<<"Reversed array is:"<<endl;
   for( i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}