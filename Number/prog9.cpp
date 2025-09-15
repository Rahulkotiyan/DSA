//to find sum of GP series

// sum = a(r^n - 1)/(r-1)

#include<bits/stdc++.h>
using namespace std;

int sumGP(float a,float r,float n)
{
    float sum ;
    sum = (a*(pow(r,n)-1))/(r-1);
    return sum; 
}

int main()
{
    float sum, a, r, n;
    cout << "first num" << endl;
    cin >> a;
    cout << "diff" << endl;
    cin >>r;
    cout << "total terms" << endl;
    cin >> n;
    sum = sumGP(a, r, n);
    cout << "The sum is:" << sum << endl;
    return 0;
}


{/*
    second approach: sum = sum +a;
                        a=a*r
    
    */}


    {/*
        greatest between to two numbers : max(num1.num2)
        

        greatest between to three numbers : max(num1,(max(num2,num3)))
        */}