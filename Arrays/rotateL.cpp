#include<bits/stdc++.h>
using namespace std;

void rotLeft(int a[],int n)
{
    int temp = a[0];
    for(int i=1;i<n;i++)
    {
        a[i-1]=a[i];
    }
    a[n-1]=temp;
    cout<<"Rotated array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
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
    rotLeft(a,n);
    return 0;
}