//rearrange the array elements by sign 

#include<bits/stdc++.h>
using namespace std;
vector<int> rearrange(vector<int> a)
{
    int n=a.size();
    vector<int> ans(n);
    int posIndex=0;
    int negIndex=1;

    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            ans[negIndex]=a[i];
            negIndex += 2;
        }
        else{
            ans[posIndex] = a[i];
            posIndex +=2;
        }
    }
    return ans;
}

int main()
{
    vector<int> a;
    int n;
    cout << "Enter the size of array" << " ";
    cin >> n;
    cout << "Enter the elements into array" << " ";
    for (int i = 0; i < n ; i++)
    {
        int element;
        cin>>element;
        a.push_back(element);
    }
    vector<int> result = rearrange(a);
    cout<<"The array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}