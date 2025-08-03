#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            cout << j+1;
        }
        cout << endl;
    }
}

int main()
{
    pattern(5);
    return 0;
}