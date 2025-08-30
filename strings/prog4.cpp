//(different approach ) Program to reverse the words in a string

#include<bits/stdc++.h>
using namespace std;

string revWord(string s)
{
    int n,i;
    string word,ans;
    n=s.length();
    reverse(s.begin(),s.end());
    for(i=0;i<n;i++)
    {
        word="";
        while(i<n && s[i]!=' ')
        {
            word += s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length()>0)
        {
            ans += " "+word;
        }
    }
    return ans.substr(1);
}


int main()
{
    string s;
    cout<<"Enter the string:"<<endl;
    getline(cin,s);
    string rev = revWord(s);
    cout<<"After reversal:"<<endl;
    cout<<rev<<endl;
    return 0;
}
