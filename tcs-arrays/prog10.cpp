//Find all repeating elements in an array

#include<bits/stdc++.h>
using namespace std;

void findRepeatingElements(vector<int>& arr)
{
    map<int,int> elementCount;
    for(auto i:arr)
        ++elementCount[i];
    
    cout<<"Repeating element are:";
    for(auto i:elementCount)
    {
        if(i.second>1)
            cout<<i.first<<" ";
    }
}

int main()
{
    int n;
    vector<int> ans;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        ans.push_back(element);
    }
    findRepeatingElements(ans);
    return 0;
}


{/*Approach 1:
    findRepeatingElements(int arr[],int n)
    {
        int cnt=0;
        int dup[n];
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                    dup[cnt++] = arr[i];
            }
        }
        for(int i=0;i<cnt;i++)
            if(dup[i]!=dup[i+1])
                cout<<dup[i]<<" ";
    }
    
    Approach2:

    findRepeatingElements(vector<int>& arr)
    {
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++)
            if(arr[i]==arr[i+1])
                cout<<arr[i]<<" ";
    }
    
    */}