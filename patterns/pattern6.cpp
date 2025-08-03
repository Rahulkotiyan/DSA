#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern1(int n)
{
    int i, j;
    for (i = 0; i <n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (j = 0; j < 2*n-(2*i+1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j <i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    pattern1(5);
    return 0;
}