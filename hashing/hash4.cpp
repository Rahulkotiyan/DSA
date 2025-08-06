#include <bits/stdc++.h>
using namespace std;
int main()
{

    int q;
    char c;
    string s;
    cout << "Enter the string:" << " ";
    cin >> s;

    map<char,int> mpp;

    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]-'a'] += 1;
    } 

    cout << "Enter query" << " ";
    cin >> q;

    while (q--)
    {
        cout << "Enter the character" << " ";
        cin >> c;
        cout << mpp[c-'a'] << " "; 
    }

    return 0;
}