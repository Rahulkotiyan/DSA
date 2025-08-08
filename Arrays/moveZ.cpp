#include<bits/stdc++.h>
using namespace std;

void moveZ(int a[],int n)
{
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++)
    {
        if(a[i]!=0)
        {
            swap(a[i],a[j]);
            j++;
        }
    }
    cout<<"Moved array is :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
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
    moveZ(a,n);
    return 0;
}