#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    
    cout << "Enter the size of the array";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int maximum = 0;             // Initialize maximum to 0
    for (int i = 0; i < 13; i++) // Iterate through the entire hash array
    {
        if (hash[i] > maximum)
        {
            maximum = hash[i];
            cout<<"Element is:"<<i<<" ";
        }
    }
    cout<<maximum<<endl;

    return 0;
}