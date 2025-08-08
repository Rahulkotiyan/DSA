#include<bits/stdc++.h>
using namespace std;

int dupl(int a[],int n)
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(a[i]!=a[j])
        {
            a[i+1]=a[j];
            i++;
        }
    }
    return (i+1);
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
    int result= dupl(a,n);
    cout<<"The result is:"<<result;
    return 0;
}