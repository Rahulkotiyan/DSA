// program to check a number is prime or not

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num == 0 || num ==1)
        return false;
    for(int i=2;i<num;i++)
    {
        if(num%i == 0)
            return false;
    }
    return true;
}
int main()
{
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    if(isPrime(num))
        cout<<"its prime"<<endl;
    else
        cout<<"its not prime"<<endl;
    return 0;
}