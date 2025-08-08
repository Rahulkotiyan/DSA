#include<bits/stdc++.h>
using namespace std;

int linear(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(key == a[i])
            return i;
    }
    return -1;
}

int main()
{
    int a[100], n,key;
    cout << "Enter the size of array" << " ";
    cin >> n;
    cout << "Enter the elements into array" << " ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<"Enter key to be searched"<<endl;
    cin>>key;
    int pos = linear(a,n,key);
    cout<<"Element found at position :"<<" "<<pos;
    return 0;
}