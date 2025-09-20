//gcd and lcm program

//gcd: its the largest number that divides both number without leaving a remainder

//Euclidean number : gcd of two numbers remains the same even if the smaller number is subtracted from the larger number
#include<bits/stdc++.h>
using namespace std;

int gcd(int m,int n)
{
    while(m!=n)
    {
        if (m > n)
            m = m - n;
        else
            n = n - m;
    }
    return m;
}

int lcm(int m,int n)
{
    return ((m*n)/gcd(m,n));
}

int main()
{
    int m,n,num,res;
    cout<<"Enter m:"<<endl;
    cin>>m;
    cout<<"Enter n:"<<endl;
    cin>>n;
    cout<<"Enter number:"<<" ";
    cin>>num;
    switch(num)
    {
        case 1: res = gcd(m,n);
                cout<<"The result "<<res;
                    break;
        case 2: res= lcm(m,n);
            cout << "The result "<< res;
            break;
        default : exit(0);
    }
    return 0;
}
