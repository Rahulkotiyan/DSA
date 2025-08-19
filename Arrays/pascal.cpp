//program to print pascal triangle for a given n rows

#include<bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row)
{
    int ans=1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int col=1;col<row;col++)
    {
        ans=ans*(row-col);
        ans=ans/(col);
        ansRow.push_back(ans);
    }
    return ansRow;
}
vector<vector<int>> pascal(int N)
{
    vector<vector<int>> ans;
    for(int i=1;i<=N;i++)
    {
        ans.push_back(generateRow(i));
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    vector<vector<int>> triangle = pascal(n);

    for (auto row : triangle)
    {
        for (auto val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}