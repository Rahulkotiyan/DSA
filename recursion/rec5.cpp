#include<bits/stdc++.h>
using namespace std;

int stringPallindrome(string s,int start,int end)
{
    if(start>=end)
        return 1;
    if(s[start]!=s[end])
        return 0;
    return stringPallindrome(s,start+1,end-1);
}

/*
int pallindrome(string s.int i,int n)
{
    if(i>=n/2)
        return 1;
    if(s[i]!=s[n-i-1])
        return 0;
    return pallindrome(s,i+1,n);
}

*/

int main()
{
    stringPallindrome("madam",0,4) ? cout << "Pallindrome" : cout << "Not a Pallindrome";
    return 0;
}