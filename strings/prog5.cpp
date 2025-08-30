//program to find largest odd number in a string

#include <bits/stdc++.h>
using namespace std;

string largest(string num)
{
    // Traverse from right to left
    for (int i = num.size() - 1; i >= 0; i--)
    {
        if ((num[i] - '0') % 2 != 0) // found last odd digit
        {
            return num.substr(0, i + 1); // keep everything up to that digit
        }
    }
    return ""; // no odd digit found
}

int main()
{
    string s;
    cout << "Enter the string:" << endl;
    getline(cin, s);

    string ans = largest(s);
    if (ans.empty())
        cout << "No odd number can be formed." << endl;
    else
        cout << "Largest odd number: " << ans << endl;

    return 0;
}
