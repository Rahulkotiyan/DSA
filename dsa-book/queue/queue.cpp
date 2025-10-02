//program to implement queue

#include<bits/stdc++.h>
#define queue_size 5
using namespace std;

void insert_rear(int item,int *r,int q[])
{
    if(*r==queue_size-1)
    {
        cout<<"Queue is full"<<endl;
        return;
    }
    *r=*r+1;
    q[*r]=item;
}

void delete_front(int *f,int *r,int q[])
{
    int item;
    if(*f>*r)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    item=q[*f];
    cout<<"The item deleted is: "<<item;
    *f=*f+1;
    if(*f>*r)
    {
        *f=0;
        *r=-1;
    }
}

void display(int f,int r,int q[])
{
    int i;
    if(f>r)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    for(i=f;i<=r;i++)
        cout<<q[i]<<" ";
}

int main()
{
    int f,r,choice,item,q[20];
    f=0;
    r=-1;
    for(;;)
    {
        cout<<"1.Insert 2.Delete 3.Display 4.Exit"<<endl;
        cout<<"Enter the choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"Enter the item:"<<endl;
                    cin>>item;
                    insert_rear(item,&r,q);
                    break;
            case 2:delete_front(&f,&r,q);
                    break;
            case 3:cout<<"The contents of queue are: "<<endl;
                    display(f,r,q);
                    break;
            default:exit(0);
        }
    }
    return 0;
}