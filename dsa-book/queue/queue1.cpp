//implementation of queue using linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int info;
    struct node *link;
};
typedef struct node *NODE;

NODE insert_rear(int item, NODE first)
{
    NODE temp,cur;
    temp=(NODE)malloc(sizeof(struct node));
    temp->info=item;
    temp->link=NULL;
    if(first==NULL)
    {
        first=temp;
        return first;
    }
    cur=first;
    while(cur->link!=NULL)
    {
        cur=cur->link;
    }
    cur->link=temp;
    return first;
}

NODE delete_front(NODE first)
{
    NODE temp;
    if(first == NULL)
    {
        cout<<"List empty!!"<<endl;
        return first;
    }
    temp=first;
    first=first->link;
    cout<<"The deleted item is: "<<temp->info;
    free(temp);
    return first;
}

void display(NODE first)
{
    NODE cur;
    if(first == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    cout<<"The contents of list are:"<<endl;
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
            cout<<"1.Insert 2.Delete 3.Display 4.Exit"<<endl;
            cout<<"Enter the choice"<<endl;
            cin>>choice;
            switch(choice)
            {
                case 1:cout<<"Enter the item"<<endl;
                        cin>>item;
                        first=insert_rear(item,first);
                        break;
                case 2:first=delete_front(first);
                        break;
                case 3:display(first);
                    break;
                default:exit(0);
            }
    }
}
