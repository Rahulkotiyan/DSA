//program to remove the outermost parenthesis from a string

#include<bits/stdc++.h>
using namespace std;

string removePar(string s)
{
    int counter =0;
    string ans ="";

    for(int i=0;i<s.length();i++)
    {
        if(s[i]==')') 
            counter--;
        if(counter!=0)
            ans.push_back(s[i]);
        if(s[i]=='(') 
            counter++;
    }
    return ans;
}
int main()
{
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    string ans =removePar(s);
    cout<<ans;
    return 0;
}