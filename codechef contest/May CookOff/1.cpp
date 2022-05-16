#include<bits/stdc++.h>
#define himanshu main
#define ll long long int
                      
using namespace std;
int himanshu()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  ll t;
  cin>>t;
  while(t--)
  {
    int x,y,z;
    cin>>x>>y>>z;
    if(z>=x&&z<x+y)
    {
        cout<<"1\n";
    }
    else if(z>=x&&z>=(x+y))
    {
        cout<<"2\n";
    }
    else
    {
        cout<<"0\n";
    }
  }
  return 0;
}