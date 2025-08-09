#include<bits/stdc++.h>
using namespace std;

int maximum(int a[],int n)
{
    int maxi=0;
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            counter++;
            maxi=max(maxi,counter);
        }
        else{
            counter=0;
        }
    }
    return maxi;
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
    int ind = maximum(a, n);
    cout << "Maximum is:" << " " << ind;
    return 0;
}