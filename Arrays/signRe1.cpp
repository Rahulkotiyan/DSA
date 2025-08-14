//rearrange the elements in array according when the number of positive and negative integers are not same;


#include<bits/stdc++.h>
using namespace std;
vector<int> alternateNumbers(vector<int> a)
{
    vector<int> pos,neg;
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            pos.push_back(a[i]);
        }
        else
        {
            neg.push_back(a[i]);
        }
    }
    if(pos.size()>neg.size())
    {
        for(int i=0;i<neg.size();i++)
        {
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }
        int index = neg.size()*2;
        for(int i=neg.size();i<pos.size();i++)
        {
            a[index]=pos[i];
            index++;
        }
    }
    else
    {
        for (int i = 0; i < pos.size(); i++)
        {
            a[2 * i] = pos[i];
            a[2 * i + 1] = neg[i];
        }
        int index = pos.size() * 2;
        for (int i = pos.size(); i < neg.size(); i++)
        {
            a[index] = neg[i];
            index++;
        }
    }
    return a;
}

int main()
{
    vector<int> a;
    int n;
    cout << "Enter the size of array" << " ";
    cin >> n;
    cout << "Enter the elements into array" << " ";
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        a.push_back(element);
    }
    vector<int> result = alternateNumbers(a);
    cout << "The array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}