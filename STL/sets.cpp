#include<bits/stdc++.h>
#define himanshu main
using namespace std;

void print(multiset<string> &s)
{
    for(auto &a:s)
    {
        cout<<a<<" ";
    }cout<<endl;
}
                   
int himanshu()
{
//   set<string>s;
//   s.insert("abc");//log n and insert only unique elements
//   s.insert("hkj");
//   s.insert("lkj");
//   auto it=s.find("abc");//log n
//   print(s);
//   cout<<*it<<endl;//most functions same as map and vectors

  /*---------------------------------Question on set---------------------------------*/
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     string str;
    //     cin>>str;
    //     s.insert(str);
    // }

    // print(s);

    /*---------------------------------Unordered sets Que------------------------------*/
    // unordered_set<string >st;
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     string s;
    //     cin>>s;
    //     st.insert(s);
        
    // }
    // int q;
    // cin>>q;
    
    // while(q--)
    // {
    //     string s;
    //     cin>>s;
    //     auto it=st.find(s);
    //     if(it==st.end())
    //     {
    //         cout<<"No\n";
    //     }
    //     else
    //     {
    //         cout<<"Yes\n";
    //     }
    // }

    /*------------------------------------------Multiset------------------------------------*/

    // multiset<string> s;
    // s.insert("abc");//all operation becomes log n
    // s.insert("xyz");
    // s.insert("ABC");
    // s.insert("abc");
    // // print(s);
    // auto it=s.find("abc");
    // // cout<<*(it)<<" "<<*(it++);

    // // if(it!=s.end())
    // // {
    // //     s.erase(it);//deletes fist occurance 
    // // }
    // // print(s);

    // s.erase("abc");
    // print(s);//deletes all occurances


/*--------------------------------------------Multi set Que-----------------------------------------*/



    
  return 0;
}