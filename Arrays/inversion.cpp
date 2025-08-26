//program to find count inversions in an array


#include<bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr,int low,int mid,int high)
{
    vector<int> temp;
    int left = low;
    int right = mid+1;

    int counter = 0;

    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            counter += (mid-left+1);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }
    return counter;
}
int mergeSort(vector<int> &arr,int low,int high)
{
    int counter = 0;
    if(low>=high)
        return counter;
    int mid = (low+high)/2;
    counter += mergeSort(arr,low,mid);
    counter += mergeSort(arr,mid+1,high);
    counter += merge(arr,low,mid,high);
    return counter;    
}

int numberOfInversions(vector<int>&a, int n)
{
    return mergeSort(a,0,n-1);
}
int main()
{
    vector<int> a ={5,4,3,2,1};
    int n=5;
    int cnt = numberOfInversions(a,n);
    cout<<"The number of inversions are:"<<cnt<<endl;
    return 0;
}
