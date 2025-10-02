//find all symmetric pairs in the array of pairs

#include<bits/stdc++.h>
using namespace std;

void symmetry(int arr[][2],int n)
{
    map<int,int> mp;
    
    for(int i=0;i<n;i++)
    {
        int  first = arr[i][0];
        int second  = arr[i][1];

        if (mp.find(second) != mp.end() && mp[second] == first)
        {
            cout<<"("<<first<<" "<<second<<")"<<" ";
        }
        else
        {
            mp[first] = second;
        }
    }
}


int main()
{
    int n=5;
    int arr[5][2] = {{1,2},{2,1},{3,4},{4,5},{5,4}};
    map<int,int> mp;

    symmetry(arr,n);

    return 0;
}