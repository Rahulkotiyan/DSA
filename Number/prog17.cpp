//Program to check if a number is a strong number or not
//Strong number : Sum of factorail of individual digits of a number is equal to the original number 


#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return (n*factorial(n-1));
}

bool strong(int num)
{
    int d;
    int originalNum = num;
    int sum=0;
    while(num!=0)
    {
        d = num%10;
        sum = sum + factorial(d);
        num = num/10;
    }
    if(originalNum == sum)
        return true;
    else
        return false;
}

int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    if(strong(num))
        cout<<"Its a strong number";
    else
        cout<<"Its not a strong number";
    return 0;
}