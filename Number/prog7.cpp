//to find sum of first N natural numbers

#include<bits/stdc++.h>
using namespace std;

int Sum(int n)
{
    return((n*(n+1))/2);
}

int main()
{
    int sum;
    int number;
    cout<<"enter the number"<<endl;
    cin>>number;
    sum=Sum(number);
    cout<<"The sum is:"<<sum;
    return 0;
}



//second approach : to use for loop interate through the numbers and find the sum

