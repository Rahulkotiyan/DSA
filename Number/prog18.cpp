//Program to check if a number is Automorphic number

//Automorphic number: Number is automorphic if its square ends in the same digits as the number itself

#include<bits/stdc++.h>
using namespace std;

bool automorphic(int n)
{
    int sq=n*n;

    while(n>0)
    {
        if(n%10 != sq%10)
         return false;
         n/=10;
         sq/=10;
    }
    return true;
}

int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    if(automorphic(num))
        cout<<"Automorphic number"<<endl;
    else 
        cout<<"Not automorphic"<<endl;
    return 0;
}

