//Program to merge all the overlapping intervals

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> mergeOver(vector<vector<int>> &arr)
{
    int n=arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    for(int i=0;i<n;i++)
    {
        if(ans.empty() || arr[i][0]>ans.back()[1])
        {
            ans.push_back(arr[i]);
        }
        else
        {
            ans.back()[1]=max(ans.back()[1],arr[i][1]);
        }
    }
    return ans;
}
int main() {
    int n;
    cout << "Enter number of intervals: ";
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));
    cout << "Enter intervals (start end):\n";
    for (int i = 0; i < n; i++) {
        cin >> intervals[i][0] >> intervals[i][1];
    }

    vector<vector<int>> merged = mergeOver(intervals);

    cout << "Merged intervals:\n";
    for (auto &interval : merged) {
        cout << interval[0] << " " << interval[1] << "\n";
    }

    return 0;
}