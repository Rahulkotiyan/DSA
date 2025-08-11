#include<bits/stdc++.h>
using namespace std;
void sortArray(int a[],int n)
{
    int low=0;int mid=0;int high=n-1;
    while(mid<=high)
    {
        if(a[mid]==0){
            swap(a[low],a[mid]);
            low++;
            mid++;
        }
        else if(a[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(a[mid],a[high]);
            high--;
        }
    }
    cout<<"Array after sorting :"<<endl;
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
    for (int i = 1; i <= n - 1; i++)
    {
        cin >> a[i];
    }
    sortArray(a,n);
    return 0;
}

