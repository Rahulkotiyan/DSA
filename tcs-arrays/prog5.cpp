//program to find sum of elements in the array

#include<bits/stdc++.h>
using namespace std;

int Sum(vector<int> a)
{
    int sum =0;
    int n = a.size();
    for(int i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

int main()
{
    vector<int> a;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        a.push_back(element);
    }
    int sum = Sum(a);
    cout<<"The sum is: "<<sum<<endl;
    return 0;
}