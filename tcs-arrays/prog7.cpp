


//Program to remove duplicates from sorted array

#include<bits/stdc++.h>
using namespace std;

set<int> removeDuplicates(int arr[],int n)
{
    set<int> S;
    for(int i=0;i<n;i++)
    {
        S.insert(arr[i]);
    }
    return S;
}

int main()
{
    int n,arr[100];
    cout<<"Enter the size"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    set<int> ans = removeDuplicates(arr,n);
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}

// average of all elements in an array
 /*
     for(int =0;i<n;i++)
     {
         sum+=arr[i];
     }
     avg=sum/n;
     */


// median of array elements

 /*
     void getMedian(int arr[],int n)
     {
         sort(arr,arr+n);
         if(n%2 == 0)
         {
             int ind1= (n/2)-1;
             int ind2 = (n/2);
             med= (arr[ind1]+arr[ind2])/2
         }
         else
         {
             med= arr[(n/2)];
         }
     }
 */
