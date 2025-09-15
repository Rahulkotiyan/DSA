//prime in a range

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if (num == 0 || num == 1)
        return false;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int start,end;
    cout<<"Enter the range"<<endl;
    cin>>start>>end;
    for(int i=start;i<=end;i++)
    {
        if (isPrime(i))
            cout<<i<<endl;
    }
    
    return 0;
}