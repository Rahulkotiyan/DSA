//Program to generate the number of subarray with sum k

#include<bits/stdc++.h>
using namespace std;

int findCount(int a[],int n,int k )
{
    map<int,int> mpp;
    mpp[0]=1;
    int preSum = 0,cnt=0;

    for(int i=0;i<n;i++)
    {
        preSum += a[i];
        int remove = preSum-k;
        cnt += mpp[remove];
        mpp[preSum] +=1;
    }
 return cnt;
}
int main()
{
    int n,k;
    int a[100];
    cout<<"n:";
    cin>>n;
    cout<<"Enter the array";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"K value";
    cin>>k;
    int result = findCount(a,n,k);
    cout<<"The result"<<result;
    return 0;
}