// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;

//     node(int val)
//     {
//         data=val;
//         next=NULL;
//     }

// };

// void insertAttail(node * &head,int val)
// {
//     node* n=new node(val);
//     if(head==NULL)
//     {
//         head=n;
//         return;
//     }

//     node* temp=head;
//     while(temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=n;

// }

// void insertAthead(node * &head,int val)
// {
//     node* n= new node(val);
//     n->next=head;
//     head=n;
// }

// bool search(node *head,int key)
// {
//     node * temp=head;
//     while(temp!=NULL)
//     {
//         if(temp->data==key)
//             return true;
//         temp=temp->next;    
//     }
//     return false;
// }

// void deletion(node* &head,int val)
// {
//     node * temp=head;

//     while(temp->next->data!=val)
//     {
//         temp=temp->next;
//     }
//     node * del=temp->next;
//     temp->next=temp->next->next;
//     delete del;
// }

// void display(node * head)
// {
//     node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<"\n";
// }

// node* reverse(node *& head)
// {
//     node* currptr=head;
//     node* prevptr=NULL;
//     node* nextptr;

//     while(currptr!=NULL)
//     {
//         nextptr=currptr->next;
//         currptr->next=prevptr;
//         prevptr=currptr;
//         currptr=nextptr;

//     }

//     return prevptr;
// }

// node* rev(node* &head)
// {
//     if(head==NULL ||  head->next==NULL)
//     {
//         return head;
//     }
//     node * newheadd= rev(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return newheadd;
// }




// int main()
// {
//     node * head=NULL;
//     insertAttail(head,1);
//     insertAttail(head,2);
//     insertAttail(head,3);
//     display(head);
//     // insertAthead(head,6);
//     // insertAthead(head,5);
//     // display(head);
//     // cout<<search(head,6)<<endl;
//     // deletion(head,3);
//     // display(head);
//     // node * rev=reverse(head);
//     node * reve=rev(head);
//     display(reve);

//     return 0;

// }

#include<iostream>

using namespace std;

class node {
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }

};

void display(node * head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

void append(node* &head,int val)
{
    node* new_node=new node(val);
    if(head==NULL)
    {
        head=new_node;
        return;
    }
    node * temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;

}

void prepend(node * &head,int val)
{
    node* n= new node(val);
    n->next=head;
    head=n;

}

bool search(node * head, int k)
{
    while(head!=NULL)
    {
        if(head->data==k)
        {
            return true;
        }
        head=head->next;
    }
    return false;
}

void deletion( node * &head, int k)
{
    node* temp=head;

    while(temp->next!=NULL)
    {
        if(temp->next->data==k)
        {
            break;
        }
        temp=temp->next;
    }

    temp->next=temp->next->next;
    node* to_delete=temp->next;
    delete to_delete;

}

node* reverse(node *& head)
{
    node * currptr=head;
    node*preptr=NULL;
    node * nxtptr;
    while(currptr!=NULL)
    {
        nxtptr=currptr->next;
        currptr->next=preptr;
        preptr=currptr;
        currptr=nxtptr;
    }

    return preptr;
}

node * revk(node* &head,int k)
{
    node * currptr=head;
    node*preptr=NULL;
    node * nxtptr;
    int count=0;
    int size=0;
    node * temp=head;
    while(temp!=NULL)
    {
        size++;
        temp=temp->next;
    }
    if(size<k)
    {
        return head;
    }
    while(currptr!=NULL&&count<k)
    {
        nxtptr=currptr->next;
        currptr->next=preptr;
        preptr=currptr;
        currptr=nxtptr;
        count++;
    }
    if(nxtptr!=NULL)
    {
        node* new_head=revk(preptr,k);
    }

    return preptr;
}