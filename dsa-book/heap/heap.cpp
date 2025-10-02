//program to perform insertion,deletion and display the heap

#include<bits/stdc++.h>
#define maxSize 20
using namespace std;

int insert_heap(int item,int a[],int n)
{
    int c,p;
    if(n==maxSize)
    {
        cout<<"Heap is full"<<endl;
        return n;
    }
    n=n+1;
    c=n;
    p=c/2;
    while(p!=0 && item>a[p])
    {
        a[c]=a[p];
        c=p;
        p=c/2;
    }
    a[c]=item;
    return n;
}

int delete_heap(int a[],int n)
{
    if(n==0)
    {
        cout<<"Heap is empty.Cannot delete."<<endl;
        return 0;
    }
//Item being deleted is always the root in heap
    int item_deleted = a[1];
    cout<<"Item deleted is:"<<item_deleted<<endl;
//replace the root with last element and then arrange the heap according to max heap

    a[1]=a[n];
    n=n-1;

    int p=1;
    int c;

    while(2*p<=n)
    {
        c=2*p;

        if(c+1<=n && a[c+1]>a[c])
        {
            c=c+1;
        }

        if(a[p]<a[c])
        {
            swap(a[p],a[c]);
            p=c;
        }
        else
        {
            break;
        }
    }
    return n;
}


void display(int a[],int n)
{
    if(n==0)
    {
        cout<<"Heap is empty\n"<<endl;
        return;
    }
    cout<<"Content of the heap:"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void siftDown(int a[], int n, int p)
{
    int c; // Child index.
    while (2 * p <= n)
    {              // Loop as long as the parent has at least one child.
        c = 2 * p; // Index of the left child.

        // Check if a right child exists and is larger than the left child.
        if (c + 1 <= n && a[c + 1] > a[c])
        {
            c = c + 1; // If so, the right child is the one to compare against.
        }

        // If the parent is smaller than its largest child, swap them.
        if (a[p] < a[c])
        {
            swap(a[p], a[c]);
            // Move down to the child's position to continue sifting down.
            p = c;
        }
        else
        {
            // The parent is in the correct position, so the process is done.
            break;
        }
    }
}

int merge_heaps(int heap1[], int n1, int heap2[], int n2)
{
    if (n1 + n2 > maxSize)
    {
        cout << "Error: Not enough space to merge heaps";
        return n1;
    }

    for (int i = 1; i <= n2; i++)
    {
        heap1[n1 + i] = heap2[i];
    }

    int new_size = n1 + n2;

    for (int i = new_size / 2; i >= 1; i++)
    {
        siftDown(heap1, new_size, i);
    }
    cout << "Heaps merged successfully." << endl;
    return new_size;
}

int main()
{
    int a[maxSize+1];
    int n=0;
    int choice,item;

    while(true)
    {
        cout<<"-- Max heap Menu --"<<endl;
        cout<<"1.Insertion"<<" "<<"2.Deletion"<<" "<<"3.Display"<<" "<<"4.Exit"<<endl;
        cout<<"Enter the choice: "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"Enter the element to be inserted: ";
                    cin>>item;
                    n=insert_heap(item,a,n);
                    break;
            case 2:n=delete_heap(a,n);
                    break;
            case 3: display(a,n);
                    break;
            case 4: cout<<"Exiting program."<<endl;
                    return 0;
            default:
                    cout<<"Invalid choice.please try again."<<endl;   
        }
    }
    return 0;
}
