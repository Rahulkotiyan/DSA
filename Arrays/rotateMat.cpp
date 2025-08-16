//Rotate the matrix by 90 degree
/*
#include<bits/stdc++.h>
using namespace std;
void rotMatrix(int a[100][100],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;i<n;j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        reverse(a[i].begin(),a[i].end());
    }
    cout<<"The matrix:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n,a[100][100];
    cout<<"Enter the value of n";
    cin>>n;
    cout<<"Enter the matrix:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    rotMatrix(a,n);
    return 0;
}*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printMatrix(const vector<vector<int>> &matrix)
{
    for (const auto &row : matrix)
    {
        for (int element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }
}

void rotMatrix(vector<vector<int>> &a, int n)
{
    // Step 1: Transpose the matrix
    // Swap a[i][j] with a[j][i]
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; i++)
    {
        reverse(a[i].begin(), a[i].end());
    }
}

int main()
{
    int n;
    cout << "Enter the value of n (for an n x n matrix): ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Matrix size must be positive." << endl;
        return 1;
    }

    // Correct way to initialize a 2D vector
    vector<vector<int>> a(n, vector<int>(n));
    cout << "Enter the elements of the matrix row by row:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "\nOriginal matrix:" << endl;
    printMatrix(a);

    rotMatrix(a, n);

    cout << "\nRotated matrix:" << endl;
    printMatrix(a);

    return 0;
}