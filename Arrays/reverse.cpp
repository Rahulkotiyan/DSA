//program to find number of count inverse pairs

#include <bits/stdc++.h>
using namespace std;

// This function merges two sorted halves and should not return a value.
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    // Standard merge logic
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

// This function correctly counts the "reverse pairs".
int countPairs(vector<int> &arr, int low, int mid, int high)
{
    int right = mid + 1;
    int cnt = 0;
    for (int i = low; i <= mid; i++)
    {
        // Use 2LL to prevent potential integer overflow for large numbers
        while (right <= high && arr[i] > 2LL * arr[right])
        {
            right++;
        }
        cnt += (right - (mid + 1));
    }
    return cnt;
}

// The corrected mergeSort function
int mergeSort(vector<int> &arr, int low, int high)
{
    int cnt = 0;
    if (low >= high)
        return cnt;
    int mid = low + (high - low) / 2; // Avoids overflow for large low/high
    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid + 1, high);

    // **THE FIX**: First count the pairs, then merge the arrays.
    cnt += countPairs(arr, low, mid, high);
    merge(arr, low, mid, high); // This function just merges, it doesn't count.

    return cnt;
}

int team(vector<int> &skill, int n)
{
    return mergeSort(skill, 0, n - 1);
}

int main()
{
    vector<int> a = {4, 1, 2, 3, 1};
    int n = 5;
    int cnt = team(a, n);
    cout << "The number of reverse pairs is: " << cnt << endl; // Output will be 3
    return 0;
}