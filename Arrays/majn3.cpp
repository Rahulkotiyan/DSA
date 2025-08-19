#include <bits/stdc++.h>
using namespace std;

vector<int> majEl(vector<int> a)
{
    int count1 = 0, count2 = 0;
    int el1 = INT_MIN, el2 = INT_MIN;

    // Boyer-Moore Voting Algorithm (for n/3 majority elements)
    for (int i = 0; i < a.size(); i++)
    {
        if (count1 == 0 && el2 != a[i])
        {
            count1 = 1;
            el1 = a[i];
        }
        else if (count2 == 0 && el1 != a[i])
        {
            count2 = 1;
            el2 = a[i];
        }
        else if (a[i] == el1)
            count1++;
        else if (a[i] == el2)
            count2++;
        else
        {
            count1--;
            count2--;
        }
    }

    // Verify candidates
    count1 = 0, count2 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == el1)
            count1++;
        if (a[i] == el2)
            count2++;
    }

    vector<int> ls;
    int mini = (int)(a.size() / 3) + 1;
    if (count1 >= mini)
        ls.push_back(el1);
    if (count2 >= mini)
        ls.push_back(el2);

    sort(ls.begin(), ls.end());
    return ls;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> result = majEl(a);

    cout << "Majority elements (> n/3) are: ";
    if (result.empty())
        cout << "None";
    else
        for (int x : result)
            cout << x << " ";

    cout << endl;
    return 0;
}
