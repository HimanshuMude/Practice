#include<iostream>

using namespace std;

class node{
    public:

    int data;
    node* next;
    node* prev;

    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertAtHead(node* &head,int val)
{
    node* n= new node(val);
    n->next=head;
    if(head!=NULL){
    head->prev=n;
    }
    head=n;
}

void append(node* &head,int val)
{
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    node * n= new node(val);
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void deleteAthead(node* &head)
{
    node*temp=head;
    head=head->next;
    head->prev=NULL;
    
    delete temp;

}

void deletion(node*  &head,int pos)
{
    node* temp=head;
    if(head->next==NULL)
    {
        deleteAthead(head);
        return;
    }
    int count=1;
    while(temp!=NULL&&count!=pos)
    {
        temp=temp->next;
        count++;
    }
    node* del=temp;
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    temp->next->prev=temp->prev;
    delete del;
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
    node* head=NULL;
    append(head,1);
    append(head,2);
    append(head,3);
    append(head,4);
    append(head,5);
    append(head,6);

    display(head);
    insertAtHead(head,0);
    display(head);
    deletion(head,3);
    display(head);
    deleteAthead(head);
    display(head);
    return 0;
}