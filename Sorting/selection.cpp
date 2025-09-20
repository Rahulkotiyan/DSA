#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[],int n)
{
    int mini;
    for(int i=0;i<n-1;i++)
    {
        mini =i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[mini])
                mini=j;
        }
        swap(a[i],a[mini]);
    }
}

int main()
{
    int n, a[100];
    cout << "Enter the size of array" << endl;
    cin >> n;
    cout << "Enter the elements into array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    selectionSort(a, n);
    cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}