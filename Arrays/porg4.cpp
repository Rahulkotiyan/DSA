//program to find the missing and repeating element in the array

#include <bits/stdc++.h>
using namespace std;

vector<int> element(vector<int> a)
{
    long long n = a.size();
    long long SN = (n * (n + 1)) / 2;
    long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;

    long long S = 0, S2 = 0;
    for (int i = 0; i < n; i++)
    {
        S += a[i];
        S2 += (long long)a[i] * (long long)a[i];
    }

    long long val1 = S - SN;   // x - y
    long long val2 = S2 - S2N; // x^2 - y^2

    val2 = val2 / val1; // x + y

    long long x = (val1 + val2) / 2; // repeating
    long long y = x - val1;          // missing

    return {(int)x, (int)y}; // {repeating, missing}
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> ans = element(arr);

    cout << "Repeating element: " << ans[0] << endl;
    cout << "Missing element: " << ans[1] << endl;

    return 0;
}
