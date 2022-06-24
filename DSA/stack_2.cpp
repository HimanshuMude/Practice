#include<bits/stdc++.h>
#define himanshu main
using namespace std;

void insertAtBottom(stack<int>&st,int ele)
{
    if(st.empty())
    {
        st.push(ele);
        return;
    }
    int topele=st.top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(topele);
}

void reversest(stack<int>&st)
{
    if(st.empty()){
        return;
    }
    int x=st.top();
    st.pop();
    reversest(st);
    insertAtBottom(st,x);
}
int himanshu()
{
    // stack<string>st;
    // string s="Hey, how are you doing?";
    // for(int i=0;i<s.length();i++)
    // {
    //     string word="";
    //     while(s[i]!=' '&&i<s.length())
    //     {
    //         word+=s[i];
    //         i++;
    //     }
    //     st.push(word);
    // }

    // while(!st.empty())
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // cout<<"\n";
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reversest(st);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<"\n";
  
  return 0;
}