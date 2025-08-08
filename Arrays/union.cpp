#include<bits/stdc++.h>
using namespace std;
list<int> unionFunc(int a[],int b[],int n,int m)
{
    int i=0;
    int j=0;
    list<int> unionList={};
    while(i<n && j<m)
    {
        if(a[i]<=b[j])
        {
            if (unionList.size() == 0 || unionList.back() != a[i])
            {
                unionList.push_back(a[i]);
            }
            i++;
        }else{
            if (unionList.size() == 0 || unionList.back() != b[j])
            {
                unionList.push_back(b[j]);
            }
            j++;
        }
    }
    while(j<m)
    {
        if (unionList.size() == 0 || unionList.back() != b[j])
        {
            unionList.push_back(b[j]);
        }
        j++;
    }
    while(i<n)
    {
        if (unionList.size() == 0 || unionList.back() != a[i])
        {
            unionList.push_back(a[i]);
        }
        i++;
    }
    return unionList;
}

int main()
{
    int a[100], b[100],n,m;
    cout << "Enter the size of array" << " ";
    cin >> n;
    cout << "Enter the elements into array" << " ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the size of array" << " ";
    cin >> m;
    cout << "Enter the elements into array" << " ";
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    list<int> result = unionFunc(a,b,n,m);
    cout<<"The union of array"<<" ";
    for(auto it:result){
        cout<<it<<" ";
    }
    return 0;
}