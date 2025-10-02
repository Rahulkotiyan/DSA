//implement the stack using linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int info;
    struct node *link;
};
typedef struct node *NODE;

//insert-front
NODE push(int item,NODE first)
{
    NODE temp;
    temp=(NODE)malloc(sizeof(struct node));
    temp->info=item;
    temp->link=first;
    first=temp;
    return first;
}

//delete-front
NODE pop(NODE first)
{
    NODE temp;
    if(first == NULL)
    {
        cout<<"List empty!! Deletion not possible"<<endl;
        return first;
    }
    temp=first;
    first=first->link;
    cout<<"The deleted item is "<<temp->info;
    free(temp);
    return first;
}

void display(NODE first)
{
    NODE cur;
    if(first == NULL)
    {
        cout<<"List is empty";
        return;
    }
    cout<<"The contents of list are"<<endl;
    cur=first;
    while(cur!=NULL)
    {
        cout<<cur->info<<" ";
        cur=cur->link;
    }
}

int main()
{
    NODE first;
    int choice,item;
    first=NULL;
    for(;;)
    {
        cout<<"1.Push 2.Pop 3.Display 4.Exit"<<endl;
        cout<<"Enter the choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"Enter the item:"<<endl;
                    cin>>item;
                    first=push(item,first);
                    break;
            case 2:first=pop(first);
                    break;
            case 3:display(first);
                    break;
            default:exit(0);
        }
    }
    return 0;
}