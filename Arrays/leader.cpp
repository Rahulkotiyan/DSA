//program to find leader of an array

#include<bits/stdc++.h>
using namespace std;
vector<int> leaderEl(vector<int> a)
{
    vector<int> ans;
    int maxi = INT_MIN;
    int n=a.size();
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>maxi)
        {
            ans.push_back(a[i]);
        }
        maxi=max(maxi,a[i]);
    }
    sort(ans.begin(),ans.end());
    return ans;
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
    vector<int> result = leaderEl(a);
    cout << "The array is:" << endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}