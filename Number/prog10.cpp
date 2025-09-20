//program to check whether its leap or not

#include<bits/stdc++.h>
using namespace std;

bool leapYear(int year)
{
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
    {
        return true;
    }
    return false;
}
int main()
{
    int year;
    cout<<"Enter the year"<<endl;
    cin>>year;
    if(leapYear(year))
        cout<<"its leap year";
    else
        cout<<"its not leap year";
    return 0;
}