//Finding equilibrium index in an array
//equilibrium index is the index whose sum of elements before that index is equal to sum of elements after that index 



#include<bits/stdc++.h>
using namespace std;

int findEquilibrium(int nums[],int n)
{
    int leftSum,rightSum;

    for(int i=0;i<n;i++)
    {
        leftSum = 0;
        for(int j=0;j<i;j++)
        {
            leftSum += nums[j];
        }
        rightSum=0;
        for(int k=i+1;k<n;k++)
        {
            rightSum += nums[k];
        }
        if(leftSum == rightSum)
        {
            return i;
        }
    }   
    return -1;
}

int optimized(int nums[],int n)
{
    int totalSum=0;
    for(int i=0;i<n;i++)
    {
        totalSum += nums[i];
    }
    int leftSum=0,rightSum=totalSum;
    for(int i=0;i<n;i++)
    {
        rightSum -= nums[i];
        if(leftSum == rightSum)
        {
            return i;
        }
        leftSum += nums[i];
    }
    return -1;
}

int main()
{
    int n=5;
    int arr[] = {2,3,-1,8,4};
    int equilibriumidx = findEquilibrium(arr,n);
    cout<<equilibriumidx<<endl;
    return 0;
}



{/*
    to find circular rotattion of an array by k positions rotate it by right based on those k positions
*/}