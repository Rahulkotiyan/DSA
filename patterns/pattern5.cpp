#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    int i,j;
    for (i=n;i>0;i--)
    {
        for(j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern1(int n)
{
    int i, j;
    for (i = n; i > 0; i--)
    {
        for (j = i; j > 0; j--)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main(){
    pattern1(5);
    return 0;
}