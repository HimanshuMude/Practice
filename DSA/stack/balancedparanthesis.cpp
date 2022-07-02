#include<bits/stdc++.h>
#define himanshu main
using namespace std;

bool isBalanced(string s)
{
    stack<char>st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='('||s[i]=='['||s[i]=='{')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(st.top()!='(')
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
        else if(s[i]==']')
        {
            if(st.top()!='[')
            {
                return false;
            }
            else{
                st.pop();
            }
        }
        else if(s[i]=='}')
        {
            if(st.top()!='{')
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
        
    }
    if(st.empty()) return true;
    else return false;
}

int himanshu()
{
    string s="(){}[]";
    cout<<isBalanced(s)<<endl;
  
  return 0;
}