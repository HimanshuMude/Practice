#include<bits/stdc++.h>
#define himanshu main
using namespace std;

class node{
    public:
    int data;
    node* next;


    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void evenafterodd(node*&head)
{
    node* temp=head;
    node* even;
    node* odd;
    node* evenst;
    odd=temp;
    even=temp->next;
    evenst=even;
    while(even->next!=NULL&&odd->next!=NULL)
    {
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenst;
    if(odd->next!=NULL)
    {
        even->next=NULL;
    }
}

void insert(node *&head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head)
{
    node * temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int himanshu()
{
    node * head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    insert(head,7);
    display(head);
    evenafterodd(head);
    display(head);
  
  return 0;
}