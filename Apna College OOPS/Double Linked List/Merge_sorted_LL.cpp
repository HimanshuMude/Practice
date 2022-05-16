#include<bits/stdc++.h>

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
/*--------------------------------Iterative Way---------------------------------------*/
node * Msort(node*&head1,node* &head2)
{
    node* p1=head1;
    node* p2=head2;
    node* dummyNode=new node(-1);
    node* p3=dummyNode;
    while(p1!=NULL&&p2!=NULL)
    {
        if(p1->data<p2->data)
        {
            p3->next=p1;
            p1=p1->next;
        }
        else
        {
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    if(p1!=NULL&&p2==NULL)
    {
        p3->next=p1;
    }
    else{
        p3->next=p2;
    }

    return dummyNode->next;

}

/*-------------------------Recursive Way-----------------------------------*/

node * MRsort(node* head1,node* head2)
{
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }
    node* ans;
    if(head1->data<head2->data)
    {
        ans=head1;
        ans->next=MRsort(head1->next,head2);

    }
    else
    {
        ans=head2;
        ans->next=MRsort(head1,head2->next);
    }
    return ans;

}

void append(node*&head,int val)
{
    node* n=new node (val);
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
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main ()
{
    node* head1=NULL;
    node* head2=NULL;
    int a[]={1,3,5,7};
    int b[]={0,2,4};
    for(int i=0;i<4;i++)
    {
        append(head1,a[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        append(head2,b[i]);
    }
    node * ans=MRsort(head1,head2);

    display(ans);

    return 0;
    
}