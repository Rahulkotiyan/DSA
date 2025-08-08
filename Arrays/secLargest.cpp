#include<bits/stdc++.h>
using namespace std;

int secLargest(int a[],int n)
{
    int largest=a[0];
    int secLargest=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            secLargest=largest;
            largest=a[i];
        }else if(a[i]<largest && a[i]>secLargest)
        {
            secLargest=a[i];
        }
    }
    return secLargest;
}
 
int smallest(int a[],int n)
{
    int small=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
        }
    }
    return small;
}


int secSmallest(int a[],int n)
{
    int small=a[0];
    int secSmall = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<small)
        {
            secSmall = small;
            small = a[i];
        }else if(a[i]!=small && a[i]<secSmall)
        {
            secSmall=a[i];
        }
    }
    return secSmall;
}

int main()
{
    int a[100], n;
    cout << "Enter the size of array" << " ";
    cin >> n;
    cout << "Enter the elements into array" << " ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
   // int result = secLargest(a,n);
   // cout<<"Second largest is:"<<" "<<result;
   // int small=smallest(a,n);
   // cout << "Smallest is:" << " " << small;
    int sec=secSmallest(a,n);
    cout<<"Second smallest is:"<<" "<<sec;
    return 0;
}