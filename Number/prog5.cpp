//armstrong number or not

#include<bits/stdc++.h>
using namespace std;

int armstrong(int num){
 int originalNum = num;
 int squaredNum = 0;
 while(num!=0)
 {
    int digit = num % 10;
    squaredNum = squaredNum + (digit*digit*digit);
    num= num/10;
 }  
 if(originalNum == squaredNum)
    return true;
 else
    return false;
}
int main()
{
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    if(armstrong(number))
        cout<<"its armstrong";
    else
        cout<<"its not armstrong";
    return 0;
}