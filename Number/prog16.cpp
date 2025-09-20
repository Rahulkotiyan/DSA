//program to find all prime factors of the given number

#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
    if(n==0 || n==1)
     return false;
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

vector<int> getPrimeFactors(int n)
{
    vector<int> primeFactors;
    for(int i=2;i<=n;i++)
    {                         //First check the number is factor and then check  for its prime factors.
        if(n%i==0)
        {
            if(checkPrime(i))
            {
                primeFactors.push_back(i);
            }
        }
    }
    return primeFactors;
}

int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    vector<int> ans = getPrimeFactors(n);
    cout<<"Prime factors for"<<n<<":";
    for(auto factor:ans){
        cout<< factor<<" ";
    }
    cout<<endl;
}


{/*
    Better approach : instead of interating through every elements , iterate until the square root value 
    
    Optimal approch: 
    
    vector<int> getPrimeFactors(int n)
    {
        vector<int> primeFactors;
        for(int i=2;i<=n;i++)
        {
            if(n%i == 0)
            {
                primeFactors.push_back(i);
            }
            while(n%i == 0)
            {
                n=n/i;
            }
        }
        return primeFactors;
    }
    
    


    */}