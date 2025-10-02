//find all the non repeating elements in an array

#include<bits/stdc++.h>
using namespace std;

void findNonRepeatingElement(vector<int>& nums)
{
    map<int,int> hashMap;

    for(auto i:nums)
        ++hashMap[i];

    for(auto pairInMap:hashMap)
        if(pairInMap.second == 1)
            cout<<pairInMap.first<<" ";
}

int main()
{
    int n;
    vector<int> ans;
    cout << "Enter the size of array" << endl;
    cin >> n;
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        ans.push_back(element);
    }
    findNonRepeatingElement(ans);
    return 0;
}