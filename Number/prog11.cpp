//reverse digits of a number

#include<bits/stdc++.h>
using namespace std;
int rev(int num)
{
    int digit;
    int reversenum = 0;
    while(num!=0)
    {
        digit = num%10;
        reversenum = reversenum*10 + digit;
        num=num/10;
    }
    return reversenum;
}

int main()
{
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    int res = rev(num);
    cout<<"reversed number:"<<res;
    return 0;
}