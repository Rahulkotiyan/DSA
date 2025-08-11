#include<bits/stdc++.h>
using namespace std;

string sum(int n, vector<int> book, int target)
{
    int left=0, right=n-1;

    sort(book.begin(),book.end());
    while(left<right)
    {
        int sum = book[left]+book[right];
        if(sum == target)
        {
            return "YES";
        }
        else if(sum<target)
            left++;
        else
            right--;
    }
    return "NO";
}

int main()
{
    int n;
   
    int target;
    cout<<"Enter the size of vector"<<endl;
    cin>>n;

     vector<int> book(n);
    cout<<"Enter the elements into the vector"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>book[i];
    }
    cout<<"Enter the target element :"<<endl;
    cin>>target;
    string res = sum(n,book,target);
    cout<<res;
    return 0;
}