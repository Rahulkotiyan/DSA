#include<bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    int count = 0;
    while (n > 0)
    {
        int digit = n % 10;
        n = n / 10;
        count++;
    }
    return count;
}

int reverseNumber(int n)
{
    int sum=0;
    while(n>0)
    {
        int digit = n % 10;
        sum=(sum*10)+digit;
        n=n/10;
    }
    return sum;
}

int pallindrome(int n){
    int original = n;
    int reversed = 0;
    while(n>0)
    {
        int digit = n%10;
        reversed = (reversed * 10) + digit;
        n = n / 10;
    }
    if(original == reversed )
        return 1;
    else 
        return 0;
}

int armstrong(int n)
{
    int original =n;
    int sum =0;
    while(n>0)
    {
        int digit = n%10;
        sum =sum +(digit*digit*digit);
        n=n/10;
    }
    if(original == sum)
        return 1;
    else 
        return 0;    
}

void divisors(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i == 0)
        {
            cout<<i<<" ";
        }
    }
    /*
    vector<int> ls;
    for(int i=1;i<=sqrt(n);i++)
    {
    if(n%i==0)
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            ls.push_back(i);
            if(i != n/i) // To avoid duplicates for perfect squares
                ls.push_back(n/i);
        }
    }
        sort(ls.begin(), ls.end());
        for(auto i : ls)
        {
            cout<<i<<" ";
        }
    
    */
}

int prime(int n)
{
    if(n==1 || n==0){
        return -1;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return 1;
    }    
return 0;

}

int gcd(int a,int b)
{
    int m=a;
    int n=b;
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}


int main()
{
    int result =  prime(0);
    if(result == 0)
        cout<<"Prime";
    else if(result == 1)
        cout<<"Not Prime";
    else if(result == -1)
        cout<<"neither prime nor composite";
    return 0;
}