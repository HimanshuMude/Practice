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
void prepend(node *&head,int val)
{
    node * n=  new node(val);
    n->next=head;
    head=n;
}

bool search(node * head,int key)
{
    node  * temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main()
{
    node *head=NULL;
    prepend(head,1);
    prepend(head,2);
    prepend(head,3);
    cout<<search(head,4);
    return 0;

}
