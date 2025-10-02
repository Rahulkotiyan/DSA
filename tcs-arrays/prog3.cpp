//program to count frequency of each element

#include<bits/stdc++.h>
using namespace std;

map<int,int> frequency(vector<int> arr,int n)
{
    map<int,int> ans;
    for(int i=0;i<n;i++)
        ans[arr[i]]++;
    return ans;
}
//TC:N
int main()
{
    vector<int> vec;
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Enter the elements into array"<<endl;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        vec.push_back(element);
    }
    map<int,int> ans= frequency(vec,n);
    for(auto x:ans)
        cout<<x.first<<" "<<x.second<<endl;
    return 0;
}


{/*
    using extra array to check whether the element is visited or not
*/}