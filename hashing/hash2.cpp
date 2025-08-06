#include<bits/stdc++.h>
using namespace std;
int main()
{

    int q;
    char c;
    string s;
    cout<<"Enter the string:"<<" ";
    cin>>s;
    
    int hash[26]={0}; // or hash[256]={0}

    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']+=1;    ///cout frequency and index using ascii,for ex:b-a =98-97 =1
    }   //hash[s]++

    cout<<"Enter query"<<" ";
    cin>>q;

    while(q--)
    {
        cout<<"Enter the character"<<" ";
        cin>>c;
        cout<<hash[c-'a']<<" "; ///hash[c]
    }

    return 0 ;

}