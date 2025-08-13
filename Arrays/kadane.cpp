//Kadane's algorithm, Maximum subarray sum

#include<bits/stdc++.h>
using namespace std;
int maxSub(int a[],int n)
{
    int sum=0;
    int maxi=a[0];
    for(int i=0;i<n;i++)
    {
        sum += a[i];

        if(sum>maxi)
        {
            maxi=sum;
        }

        if(sum<0)
        {
            sum=0;
        }
    }
    return maxi;
}

int main()
{
    int a[100], n;
    cout << "Enter the size of array" << " ";
    cin >> n;
    cout << "Enter the elements into array" << " ";
    for (int i = 0; i < n ; i++)
    {
        cin >> a[i];
    }
    int result = maxSub(a, n);
    cout << result;
    return 0;
}