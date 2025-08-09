#include<bits/stdc++.h>
using namespace std;
int subArray(int a[],int n,int k)
{
    map<int,int> preSumMap;
    int sum=0;
    int maxLen=0;
    for(int i=0;i<n;i++)
    {
        sum += a[i];
        if(sum == k)
        {
            maxLen=max(maxLen,i+1);
        }
        int ren =sum-k;
        if(preSumMap.find(ren) != preSumMap.end())
        {
            int len=i-preSumMap[ren];
            maxLen = max(maxLen,len);
        }
        if(preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}
int main()
{
    int a[100], n,k;
    cout << "Enter the size of array" << " ";
    cin >> n;
    cout << "Enter the elements into array" << " ";
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
   cout<<"Enter the k value"<<" ";
   cin>>k;
   int maxLen = subArray(a,n,k);
   cout<<maxLen;
   return 0;
}