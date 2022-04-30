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
    node* head=NULL;
    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    print(head);
    return 0;
    

}