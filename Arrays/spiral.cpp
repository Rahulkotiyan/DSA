//program to perform spiral transportation of the matrix

#include<bits/stdc++.h>
using namespace std;
vector<int> spiralMat(vector<vector<int>>&mat)
{
    int n=mat.size();
    int m=mat[0].size();

    int left=0,right=n-1;
    int top=0,bottom=n-1;
    vector<int> ans;

    while(top<=bottom && left<=right)
    {
        for (int i = left; i <= right; i++)
        {
            ans.push_back(mat[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(mat[i][right]);
        }
        right--;
        if(top<=bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }
        for (int i = bottom; i >= top; i--)
        {
            ans.push_back(mat[i][left]);
        }
        left++;
    }

    return ans;
}
int main()
{
    // Example matrix
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    // Call the spiralMat function
    vector<int> spiral_output = spiralMat(matrix);

    // Print the result
    cout << "Spiral Traversal: ";
    for (int i = 0; i < spiral_output.size(); i++)
    {
        cout << spiral_output[i] << " ";
    }
    cout << endl;

    return 0;
}