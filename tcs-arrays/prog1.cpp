//program to find smallest element in an array

#include<bits/stdc++.h>
using namespace std;

int smallest(vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    return arr[0];
}//TM: (N*logN)

int largest(vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}

int secsmallest(vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    return arr[1];
}

int secLargest(vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    return arr[arr.size()-2];
}

int main()
{
    int n;
    vector<int> arr;
    cout<<"Enter the size: "<<endl;
    cin>>n;
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        arr.push_back(element);
    }
    int small=smallest(arr);
    int secsmall = secsmallest(arr);
    int large = largest(arr);
    int seclarge= secLargest(arr);
    cout<<small<<" "<<secsmall<<" "<<large<<" "<<seclarge<<" ";
    return 0;
}