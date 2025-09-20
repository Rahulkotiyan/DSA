//Program to check whether a given number is Harshad(niven) number

//If sum of digits divides the number

#include<bits/stdc++.h>
using namespace std;

bool harshad(int num)
{
    int origNum = num;
    int d;
    int sum = 0;
    while(num!=0)
    {
        d = num%10;
        sum = sum + d;
        num = num/10;
    }
    if(origNum % sum == 0)
        return true;
    else
        return false;
}

int main()
{
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    if(harshad)
        cout<<"Its harshad";
    else
        cout<<"Its not harshad";
    return 0;
}