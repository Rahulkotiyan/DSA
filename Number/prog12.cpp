// program to find maximum and minimum digit in a number

#include <iostream>
#include <algorithm> // For std::min and std::max
#include <climits>   // For INT_MIN and INT_MAX (though not needed in the corrected logic)
using namespace std;

// Function to find the minimum digit
int minimum(int n)
{
    // Handle negative numbers by making them positive
    if (n < 0)
        n = -n;

    int d;
    int mini = 9; // Initialize with the largest possible digit

    // Special case for the number 0
    if (n == 0)
        return 0;

    while (n != 0)
    {
        d = n % 10;
        mini = min(mini, d);
        n = n / 10;
    }
    return mini;
}

// Function to find the maximum digit
int maximum(int n)
{
    // Handle negative numbers by making them positive
    if (n < 0)
        n = -n;

    int d;
    int maxi = 0; // Initialize with the smallest possible digit

    while (n != 0)
    {
        d = n % 10;
        maxi = max(maxi, d);
        n = n / 10;
    }
    return maxi;
}

int main()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;

    cout << "Minimum digit: " << minimum(n) << endl;
    cout << "Maximum digit: " << maximum(n) << endl;

    return 0;
}