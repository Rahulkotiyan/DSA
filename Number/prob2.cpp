//program to find all pallindrome numbers in a given range

#include<bits/stdc++.h>
using namespace std;

bool isPallindrome(int num){
    int originalNum = num;
    int reversedNum = 0;
    while(num!=0){
        int number= num%10;
        reversedNum = reversedNum*10 +number;
        num = num/10;
    }
    if(reversedNum == originalNum)
        return true;
    else 
        return false;
}

int main()
{
    int start,end;
    cout<<"Enter the range:";
    cin>>start>>end;
    cout<<"Pallindrome numbers in the range are"<<endl;
    for(int i=start;i<=end;i++){
        if(isPallindrome(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}