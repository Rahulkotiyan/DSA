//Program to find the longest subsequence in the array

#include<bits/stdc++.h>
using namespace std;
int longSeq(vector<int> a)
{
    int n=a.size();
    int longest=1;
    if(n==0)
        return 0;
    unordered_set<int> st;
    for(int i=0;i<n;i++)
    {
        st.insert(a[i]);
    }   
    for(auto it:st)
    {
        if(st.find(it-1) == st.end())
        {
            int cnt=1;
            int x=it;
            while(st.find(x+1)!=st.end())
            {
                x=x+1;
                cnt=cnt+1;
            }
            longest=max(longest,cnt);
        }
    }
    return longest;
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
    int result = longSeq(a);
    cout << "The longest sequence is:" <<" "<<result;
    return 0;
}