//rearrange array in increasing-decreasing order

#include<bits/stdc++.h>
using namespace std;

void rearrange(vector<int> a,int n)
{
    sort(a.begin(),a.end());
    for(int i=0;i<n/2;i++)
        cout<<a[i]<<" ";
    for(int i=n-1;i>=n/2;i--)
        cout<<a[i]<<" ";
}

int main()
{
    int n;
    vector<int> a;
    cout<<"Size:"<<endl;
    cin>>n;
    cout<<"Enter into array:"<<endl;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        a.push_back(element);
    }
    rearrange(a,n);
    return 0;
}