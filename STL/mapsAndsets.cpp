#include<bits/stdc++.h>
#define himanshu main
using namespace std;

void printmap(map<int,string> &m)
{
  for(auto &val:m)
  {
    cout<<val.first<<" "<<val.second<<endl;
  }
}                   
void printumap(unordered_map<int,string> &m)
{
  for(auto &val:m)
  {
    cout<<val.first<<" "<<val.second<<endl;
  }
}                   
int himanshu()
{
  map<int,string> m;
  m[1]="abc";// O(log n)
  m[5]="bcd";
  m[2]="abd";
  m.insert({4,"aaa"});
  map<int,string>:: iterator it;
  // for(it=m.begin();it!=m.end();it++)
  // {
  //     cout<<it->first<<" "<<it->second<<endl;
  // }
  // printmap(m);
  auto ip=m.find(5);// return ptr to that key  O(log n)
  // if(ip==m.end())
  // {
  //   cout<<"No Item\n";
  // }
  // else 
  // {
  //   cout<<ip->first<<" "<<ip->second<<endl;
  // }
  // m.erase(2);//using key O(log n)
  // m.erase(ip);//using iterator 


  /*if iterator doesnt exist it gives segmentation fault*/
  // printmap(m);

  map<string ,string> s;
  s["abcd"]="abc";// TC is string ka size * log n

  /*-----------------------------Unordered Map---------------------------------*/

  unordered_map<int,string> a;//most of operations become O1
  a[1]="abc";
  a[3]="def";
  a[2]="hjk";
  printumap(a);
  

  return 0;
}