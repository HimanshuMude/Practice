#include<iostream>

using namespace std;

class node{
    public:

    int data;
    node* next;
    node (int val)
    {
        data=val;
        next=NULL;
    }
};
/*------------------------My Code-------------------------------*/
// void kappend(node*&head,int k)
// {
//     node* tail;
//     node* temp=head;
//     int l=0;
//     while(temp!=NULL)
//     {
//         temp=temp->next;
//         l++;
//     }
//     tail=temp;
//     node* newhead;
//     node* newtail;
//     temp=head;
//     int cnt=l-k;
//     while(temp->next!=NULL&&cnt--)
//     {
//         temp=temp->next;
        
//     }
//     newtail=temp;
//     tail->next=head;
//     newhead=temp->next;
//     newtail->next=NULL;
//     head=newhead;
// }

/*-----------------------------Lec Code------------------------------*/

int len(node*head)
{
    node* temp=head;
    int l=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        l++;
    }
    return l;
}

node* kappend(node*&head,int k)
{
    int l= len(head);
    node* newhead;
    node* newtail;
    node* tail=head;
    k=k%l;
    int count=1;
    while(tail->next!=NULL)
    {
        if(count==l-k)
        {
            newtail=tail;
        }
        if(count==l-k+1)
        {
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }
    tail->next=head;
    newtail->next=NULL;
    return newhead;

}


void prepend(node*&head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node * head=NULL;
    prepend(head,5);
    prepend(head,4);
    prepend(head,3);
    prepend(head,2);
    prepend(head,1);
    prepend(head,0);

    // kappend(head,3);    ACC to My code

    node* newhead=kappend(head,8);// ACC to Lec Code

    
    display(newhead);
    return 0;

}