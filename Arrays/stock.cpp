//Best time to buy and sell the stock
#include<bits/stdc++.h>
using namespace std;

int maxProf(int a[],int n)
{
    int mini = a[0];
    int maxProfit=0;
    for(int i=0;i<n;i++)
    {
        int cost =a[i]-mini;
        maxProfit=max(maxProfit,cost);
        mini =min(mini,a[i]); 
    }
    return maxProfit;
}
int main()
{
    int a[100], n;
    cout << "Enter the size of array" << " ";
    cin >> n;
    cout << "Enter the elements into array" << " ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int result = maxProf(a, n);
    cout << result;
    return 0;
}