//program to check whether a number is perfect number or not

#include<bits/stdc++.h>
using namespace std;

bool perfect(int num)
{
    int sum =0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum = sum + i;
        }
    }
    if(sum == num )
        return true;
    else
        return false;
}

int main()
{
    int number;
    cout<<"Enter the number:"<<endl;
    cin>>number;
    if(perfect(number))
        cout<<"Its perfect"<<endl;
    else
        cout<<"Its not perfect"<<endl;
    return 0;
}