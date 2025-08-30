//program to reverse words in a string
// brute approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="I am Rahul kotiyan";
    cout<<"Before reversing :"<<endl;
    cout<<s<<endl;
    s+=" ";
    stack<string> st;
    int i;
    string str="";
    for(i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            st.push(str);
            str="";
        }
        else str+=s[i];
    }
    string ans="";
    while(st.size()!=1)
    {
        ans+=st.top()+" ";
        st.pop();
    }
    ans+=st.top();
    cout<<"After reversing words:"<<endl;
    cout<<ans;
    return 0;
}