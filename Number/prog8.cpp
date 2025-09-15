//program to find the sum of AP series

//formula : sum = (numberOfTerms/2)(2(firstTerm)+(noOfTerms-1)commonDiff)


#include<bits/stdc++.h>
using namespace std;

int SumAP(float a, float d, float n)
{
    float sum;
    sum = (n / 2) * (2 * a + (n - 1) * d);
    return sum;
}
int main()
{
    float sum, a, d, n;
    cout<<"first num"<<endl;
    cin>>a;
    cout<<"diff"<<endl;
    cin>>d;
    cout<<"total terms"<<endl;
    cin>>n;
    sum = SumAP(a,d,n);
    cout<<"The sum is:"<<sum<<endl;
    return 0;
}

{/*
    second approach: 
    for(int i=1;i<=n;i++)
    {
    sum += a;
    a+=d;
    }
    
    */}