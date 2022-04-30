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

void prepend(node* &head,int val)
{
    node * n= new node(val);
    n->next=head;
    head=n;

}

bool detectcycle(node* head)
{
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return true;
        }
    }
    return false;
}

void createcycle(node* &head,int pos)
{
    node * temp=head;
    node* startnode;
    int count=1;
    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            startnode= temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startnode;
}

void removecycle(node * &head)
{
    node* slow=head;
    node* fast=head;
    node* preptr;
    do
    {
        preptr=slow;
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);
    
    fast=head;
    if(slow==head)
    {
        preptr->next=NULL;
        return;
    }
    while(fast->next!=slow->next)
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;
    

}
void print(node* head)
{
    node* temp=head;
    while(temp!=NULL) //1 2 3 NULL
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}

int main()
{
    node * head=NULL;
    prepend(head,5);
    prepend(head,4);
    prepend(head,3);
    prepend(head,2);
    prepend(head,1);
    createcycle(head,1);
    cout<<detectcycle(head)<<endl;
    removecycle(head);
    print(head);
    return 0;

}