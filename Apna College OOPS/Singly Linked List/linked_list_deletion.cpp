#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void prepend(node * & head,int val)
{
    node * n=new node(val);
    n->next=head;
    head=n;
}

void deletion(node * &head,int val)
{
    if(head==NULL)
    {
        cout<<"Empty list\n";
        return;
    }
    if(head->next==NULL)
    {
       deleteAthead(head); 
    }
    node * temp=head;
    while(temp->next->data!=val)
    {
        temp= temp->next;
    }
    node * todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;
}

void deleteAthead(node * &head)
{
    node * del=head;
    head=head->next;
    delete del;
}

void display(node * head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
    node* head=NULL;
    deletion(head,3);
    prepend(head,1);
    prepend(head,2);
    prepend(head,3);
    prepend(head,4);
    prepend(head,5);
    deleteAthead(head);
    display(head);

    return 0;
}