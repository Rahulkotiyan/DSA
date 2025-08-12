#include<bits/stdc++.h>
using namespace std;

int majority(int a[],int n)
{
    int counter =0;
    int el;

    for(int i=0;i<n;i++)
    {
        if(counter==0)
        {
            counter=1;
            el=a[i];
        }
        else if(a[i]==el)
        {
            counter++;
        }
        else{
            counter--;
        }
    }
    int count1=0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == el)
            count1++;
    }
    if(count1>(n/2)){
        return el;
    }
    return -1;
}

int main()
{
    int a[100], n;
    cout << "Enter the size of array" << " ";
    cin >> n;
    cout << "Enter the elements into array" << " ";
    for (int i = 1; i <= n - 1; i++)
    {
        cin >> a[i];
    }
    int result=majority(a,n);
    cout<<result;
    return 0;
}