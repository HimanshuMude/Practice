#include<bits/stdc++.h>
#define himanshu main
using namespace std;

class node{
    public:
    int  data;
    node* left;
    node* right;

    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }

};



/*-------------------DFS---------------------*/



    // root left right pre matlab root first
    void preorder(node* root)
    {
        if(root==NULL)
        {
            return;
        }   
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    // left root right in matlab middle me root
    void inorder(node *root)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    // left right root post matlab akhri me root
    void postorder(node * root)
    {
        if(root==NULL)
        {
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }



/*---------------Level Order Traversal------------------------*/ //leetcode


/*-------------------All level Order Traversals in one -------------------*/

vector<vector<int>> Alldfs(node* root)
{
    stack<pair<node*,int>>st;
    vector<int>pre,in,post;
    vector<vector<int>> ans;
    st.push({root,1});
    while(!st.empty())
    {
        auto temp=st.top();
        if(temp.second==1)
        {
            pre.push_back(temp.first->data);
            temp.second++;
            if(temp.first->left!=NULL)
            {
                st.push({temp.first->left,1});
            }
        }
        else if(temp.second==2)
        {
            in.push_back(temp.first->data);
            temp.second++;
            if(temp.first->right!=NULL)
            {
                st.push({temp.first->right,1});
            }
        }
        else{
            post.push_back(temp.first->data);
            st.pop();
        }
    }
    ans.push_back(pre);
    ans.push_back(in);
    ans.push_back(post);
    return ans;
}

// always left before right
int himanshu()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->right->left=new node(6);
    root->right->left=new node(7);
    root->right->right=new node(8);
    root->right->right->left=new node(9);
    root->right->right->right=new node(10);
    postorder(root);
    
  
  return 0;
}