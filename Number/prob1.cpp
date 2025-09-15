//program to check if a  number is pallindrome or not

#include<bits/stdc++.h>
using namespace std;

bool isPallindrome(int num){
    int originalNum =num;
    int reversedNum = 0;

    while(num!=0){
        int number = num%10;
        reversedNum = reversedNum*10+number;
        num= num/10;
    }
    if(originalNum == reversedNum){
        return true;
    }
    else 
        return false;
}

int main()
{
    int number;
    cout<<"Enter a number:";
    cin>>number;
    if(isPallindrome(number))
        cout<<"its pallindrome"<<endl;
    else
        cout<<"its not pallindrome"<<endl;
    return 0;
}