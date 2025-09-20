#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[],int n)
{
    for(int i=0;i<=n-1;i++)
    {
        int j=i;
        while(j>0 && a[j-1]>a[j])
        {
            swap(a[j-1],a[j]);
            j--;
        }
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
    insertionSort(a, n);
    cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}