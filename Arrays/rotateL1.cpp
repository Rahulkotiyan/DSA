//rotate the array to left by d places

#include<bits/stdc++.h>
using namespace std;
void rotate(int a[],int n,int d)
{
    reverse(a,a+d);
    reverse(a+d,a+n);
    reverse(a,a+n);
    cout<<"Rotated array is:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void rotRight(int a[],int n,int d)
{
    reverse(a+n-d,a+n);
    reverse(a,a+n-d);
    reverse(a,a+n);
    cout << "Rotated array is:";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}


int main()
{
    int a[100], n,d;
    cout << "Enter the size of array" << " ";
    cin >> n;
    cout << "Enter the elements into array" << " ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the d value" << " ";
    cin >> d;
    rotRight(a,n,d);
    return 0;
}