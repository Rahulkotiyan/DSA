#include<bits/stdc++.h>
using namespace std;
int singEl(int a[],int n)
{
    int xorr=0;
    for(int i=1;i<=n;i++)
    {
        xorr=xorr^a[i];
    }
    return xorr;
}

int main()
{
    int a[100], n;
    cout << "Enter the size of array" << " ";
    cin >> n;
    cout << "Enter the elements into array" << " ";
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int num = singEl(a,n);
    cout<<num;
    return 0;
}