#include<bits/stdc++.h>
using namespace std;

list<int> intersection(int a[],int b[],int m,int n)
{
    int i=0;
    int j=0;
    list<int> ans={};
    while(i<n && j<m)
    {
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main()
{
    int a[100], b[100], n, m;
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
    list<int> result = intersection(a, b, n, m);
    cout << "The union of array" << " ";
    for (auto it : result)
    {
        cout << it << " ";
    }
    return 0;
}