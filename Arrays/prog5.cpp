//Program to find product of maximum subarray

#include<bits/stdc++.h>
using namespace std;
int maxProductSubarray(vector<int> &arr)
{
    int n=arr.size();
    int pre =1 ,suff=1;
    int ans= INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(pre == 0)
            pre=1;
        if(suff == 0)
            suff=1;
        pre *=arr[i];
        suff *= arr[n-i-1];
        ans=max(ans,max(pre,suff));        
    }
    return ans;
}
int main()
{
    vector<int> arr = {1,2,-3,0,-4,-5};
    cout<<"The maximum product subarray is:"<<maxProductSubarray(arr)<<"\n";
    return 0;
}