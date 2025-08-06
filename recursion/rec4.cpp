#include<bits/stdc++.h>
using namespace std;

int reverse(int i,int n,int arr[])
{
    if(i>=n/2)
        return 0;
    swap(arr[i],arr[n-i-1]);
    return reverse(i+1,n,arr);;
}

int main()
{
    int i, n;
    int arr[200];
    cout << "Enter size of array:";
    cin >> n;
    cout << "Enter array elements:";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   reverse(0,n,arr);
   cout << "Reversed array is:" << endl;
   for (i = 0; i < n; i++)
   {
       cout << arr[i] << " ";
   }
   cout << endl;
   return 0;
}