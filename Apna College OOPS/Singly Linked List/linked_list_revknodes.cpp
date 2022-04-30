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
    node * n= new node(val);
    n->next=head;
    head=n;
    

}

node* revk(node* &head,int k)
{
    node* preptr=NULL;
    node* curptr=head;
    node* nextptr;
    int count=0;
    int siz=0;
    node * temp=head;

    while(temp!=NULL)
    {
        siz++;
        temp=temp->next;

    }

    if(siz<k)
    {
        return head;//base case
    }

    while(curptr!=NULL && count<k)
    {
        nextptr=curptr->next;//1 2 3 4 5
        curptr->next=preptr;
        preptr=curptr;
        curptr=nextptr;//rev k nodes
        count++;

    }
    if(nextptr!=NULL)
     head->next=revk(nextptr,k);//recursive call

    return preptr;

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
    node * head=NULL;
    prepend(head,6);
    prepend(head,5);
    prepend(head,4);
    prepend(head,3);
    prepend(head,2);
    prepend(head,1);
    display(head);
    int k=2;
    node* ans= revk(head,k);
    display(ans);
    return 0;

}





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

// void prepend(node* &head,int val)
// {
//     node * n= new node(val);
//     n->next=head;
//     head=n;
    

// }
// void append(node* &head,int val)
// {
//     node* n= new node(val);
//     if(head==NULL)
//     {
//         head=n;
//         return;
//     }
//     node* temp=head;
//     while(temp!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=n;
// }

// node* revk(node* &head,int k)
// {
//     node* preptr=NULL;
//     node* curptr=head;
//     node* nextptr;
    
//     int count=0;

//     while(curptr!=NULL && count<k)
//     {
//         nextptr=curptr->next;//1 2 3 4 5
//         curptr->next=preptr;
//         preptr=curptr;
//         curptr=nextptr;
//         count++;

//     }
//     if(nextptr!=NULL)
//      head->next=revk(nextptr,k);

//     return preptr;

// }

// void display(node* head)
// {
//     node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

// int main()
// {
//     node * head=NULL;
//     append(head,5);
//     append(head,6);
//     append(head,4);
//     append(head,3);
//     append(head,2);
//     append(head,1);
//     display(head);
//     int k=2;
//     node* ans= revk(head,k);
//     display(ans);
//     return 0;

// }