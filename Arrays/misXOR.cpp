#include<bits/stdc++.h>
using namespace std;
int missing(int a[],int n)
{
    int xor1=0;
    int xor2=0;
    for(int i=1;i<=n-1;i++)
    {
        xor2=xor2^a[i];
        xor1=xor1^(i);
    }
    xor1=xor1^n;
    return xor1^xor2;
}
int main()
{
    int a[100], n;
    cout << "Enter the size of array" << " ";
    cin >> n;
    cout << "Enter the elements into array" << " ";
    for (int i = 1; i <= n - 1; i++)
    {
        cin >> a[i];
    }
    int ind = missing(a, n);
    cout << "Missig element is:" << "" << ind;
    return 0;
}