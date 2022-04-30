#include<iostream>

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

void insertAttail(node* &head,int val)
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

void insertAthead(node* &head,int val)
{
    node* n=new node(val);

    n->next=head;
    head=n;
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
    node * head=NULL;
    insertAttail(head,1);
    insertAthead(head,2);
    // insertAthead(head,3);
    display(head);
    return 0;
    
}
