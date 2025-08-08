#include<bits/stdc++.h>
using namespace std;

int check(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])
        {

        }
        else
            return false;
    }
    return true;
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
    if(check(a,n))
    {
        cout<<"It is sorted";
    }
    return 0;
}