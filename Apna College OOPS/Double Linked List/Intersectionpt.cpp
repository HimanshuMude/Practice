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

void append(node*&head,int val)
{
    node * n= new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node * temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
int len(node* &head)
{
  int l=0;
  node* temp=head;
  while(temp!=NULL)
  {
      l++;
      temp=temp->next;
  }  
  return l;
}

int intersect(node* &head1,node* &head2)
{
    int l1= len(head1);
    int l2= len(head2);
    node *plong;
    node *psmall; 
    int d=0;
    if(l1>l2)
    {
        d=l1-l2;
        plong=head1;
        psmall=head2;
    }
    else
    {
        d=l2-l1;
        plong=head2;
        psmall=head1;
    }

    while(d--)
    {
        plong=plong->next;
        if(plong==NULL)
        {
            return -1;
        }

    }

    while(plong!=NULL&&psmall!=NULL)
    {
        if(plong==psmall)
        {
            return plong->data;
        }
        plong=plong->next;
        psmall=psmall->next;
    }

    return -1;


}

void intersection(node* &head1,node* &head2,int pos)
{
    node* temp1=head1;
    node*temp2=head2;
    pos--;
    while(pos--)
    {
        temp1=temp1->next;
    }
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;

}


int himanshu()
{
    node*head1=NULL;
    append(head1,2);
    append(head1,3);
    append(head1,4);
    append(head1,8);
    append(head1,9);
    node* head2=NULL;
    append(head2,7);
    append(head2,6);
    intersection(head1,head2,3);
    cout<<intersect<<endl;
  
  return 0;
}