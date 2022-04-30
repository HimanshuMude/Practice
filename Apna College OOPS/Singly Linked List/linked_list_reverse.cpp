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

void prepend(node* &head,int val)
{
    node * n=  new node(val);
    n->next=head;
    head=n;
}

node* reverse(node * &head)
{
    node* currptr=head;
    node* preptr=NULL;
    node* nextptr;
    while(currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=preptr;//1-2-3-4-5
        preptr=currptr;//      p c n
        currptr=nextptr;

    }
    return preptr;

}
/*--------------------With Recursion--------------------------*/

node * rev(node * &head) 
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* newhead= rev(head->next);
    head->next->next=head; 
    head->next=NULL; 
    return newhead;
}

void display(node* head) // next current prev
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main()
{
    node* head=NULL;
    prepend(head,1);
    prepend(head,2);
    prepend(head,3);
    prepend(head,4);
    display(head);
    // node * newhead=reverse(head);
    node * newhead=rev(head);
    display(newhead);
    return 0;
}