#include<bits/stdc++.h>
#define stack_size 5
using namespace std;


void push(int item,int *top,int s[])
{
    if(*top==stack_size-1)
    {
        cout<<"Stack overflow"<<endl;
        return;
    }
    *top=*top+1;
    s[*top]=item;
}

int pop(int *top,int s[])
{
    int item;
    if(*top==-1)
        return -1;
    item=s[*top];
    *top=*top-1;
    return item;
}

void display(int top,int s[])
{
    int i;
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
        return ;
    }
    for(i=0;i<=top;i++)
    {
        cout<<s[i]<<" ";
    }
}

int main()
{
    int top,choice,item,s[100],del;
    top=-1;
    for(;;)
    {
        cout<<"1.push 2.pop 3.display 4.exit"<<endl;
        cout<<"Enter the choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"Enter the item"<<endl;
                    cin>>item;
                    push(item,&top,s);
                    break;
            case 2:del=pop(&top,s);
                    if(del==-1)
                        cout<<"Stack underflow"<<endl;
                    else
                        cout<<"The deleted item: "<<del;
                    break;
            case 3:cout<<"The stack contents are:"<<endl;
                display(top,s);
                break;
            default:exit(0);
        }
    }
    return 0;
}