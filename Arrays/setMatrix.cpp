//program to compute set matrix zeroes

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> setMatrix(vector<vector<int>> a,int n,int m)
{
    int col0=1;

    for(int i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]==0)
            {
                a[i][0]=0;

                if(j!=0)
                    a[0][j]=0;
                else
                    col0=0;    
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(a[i][j]!=0)
            {
                if(a[0][j]==0 || a[i][0]==0)
                {
                    a[i][j]=0;
                }
            }
        }
    }

    if(a[0][0] == 0)
    {
        for(int j=0;j<m;j++)
            a[0][j] = 0;
    }
    if(col0=0)
    {
        for(int i=0;i<n;i++)
        {
            a[i][0]=0;
        }
    }
    return a;
}
int main()
{
    vector<vector<int>> a;
    int n,m;
    cout << "Enter the size of array" << " ";
    cin >> n;
    cout << "Enter the m size of array" << " ";
    cin >> m;
    cout << "Enter the elements into array" << " ";
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++)
        {
            int element;
            cin >> element;
            a.push_back(element);
        }
    }
   
    vector<vector<int>> result = setMatrix(a,n,m);
    cout << "The matrix is:" << endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
     return 0;
}