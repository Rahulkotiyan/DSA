//Program to find next permutation in an array

#include<bits/stdc++.h>
using namespace std;
vector<int> nextPer(vector<int> a)
{
    int ind=-1;
    int n=a.size();

    for(int i=n-2;i>=0;i--)
    {
        if(a[i]<a[i+1])
        {
            ind=i;
            break;
        }
    }
    if(ind == -1)
    {
        reverse(a.begin(),a.end());
        return a;
    }
    for(int i=n-1;i>ind;i--)
    {
        if(a[i]>a[ind])
        {
            swap(a[i],a[ind]);
            break;
        }
    }
    reverse(a.begin()+ind+1,a.end());
    return a;
}
int main()
{
    vector<int> a;
    int n;
    cout << "Enter the size of array" << " ";
    cin >> n;
    cout << "Enter the elements into array" << " ";
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        a.push_back(element);
    }
    vector<int> result = nextPer(a);
    cout << "The next permutation is:" << endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}