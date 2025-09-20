//program to bubble sort an array

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}


void bubbleOpt(int a[],int n)
{
    bool flag;
    for(int i=0;i<n-1;i++)
    {
        flag = false;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                flag=true;
            }
        }
        if (!flag)
            break;
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
    bubbleOpt(a, n);
    cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
