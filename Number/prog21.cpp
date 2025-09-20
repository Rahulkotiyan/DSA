//Program to check whether its abundant number or not
//if sum of divisors is greater than the number

#include<bits/stdc++.h>
using namespace std;

bool abundant(int n)
{
    int sum =0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum = sum + i ;
        }
    }
    if(sum > n)
        return true;
    else
        return false;
}

int main()
{
    int num;
    cout<<"Enter number:"<<endl;
    cin>>num;
    if(abundant(num))
        cout<<"Its abundant";
    else
        cout<<"Its not abundant";
    return 0;
}


{
    /*

    to find sum of numbers in given range

    int numbers(int s,int e)
    {
        int sum = 0;
        for(int i=s;i<=e;i++)
        {
            sum = sum + i;
        }
            return sum;
    }
    
    */
}