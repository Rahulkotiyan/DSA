#include<bits/stdc++.h>
using namespace std;
int longArray(int a[], int n ,int k)
{
    int left=0;
    int right=0;
    int sum=a[0];
    int maxLen=0;
    while(right<n)
    {
        while(left<=right && sum>k)
        {
            sum -= a[left];
            left++;
        }
        if(sum == k)
        {
            maxLen = max(maxLen,right-left+1);
        }
        right++;
        if(right<n) 
            sum += a[right];
    }
    return maxLen;
}
int main()
{
    int a[100], n, k;
    cout << "Enter the size of array" << " ";
    cin >> n;
    cout << "Enter the elements into array" << " ";
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the k value" << " ";
    cin >> k;
    int maxLen = longArray(a, n, k);
    cout << maxLen;
    return 0;
}