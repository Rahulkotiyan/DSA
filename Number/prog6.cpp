//even or odd

#include<bits/stdc++.h>
using namespace std;

bool EvnOD(int num)
{
    if(num ==0 || num ==1)
     return false;
    if(num%2==0)
     return true;
    else 
     return false;
}

int main()
{
    int number;
    cin>>number;
    if(EvnOD(number))
        cout<<"Its a even"<<endl;
    else
        cout<<"its odd"<<endl;
    return 0;
}


{/*
    for checking positive or negative

    if(num<0)
     return false;
    else
        return true;
    
    */}