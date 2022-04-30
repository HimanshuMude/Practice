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
    if(z%x==0&&z%y==0)
    {
        cout<<"ANY\n";
    }
    else if(z%x==0&&z%y!=0)
    {
        cout<<"CHICKEN\n";
    }
    else if(z%x!=0&&z%y==0)
    {
        cout<<"DUCK\n";
    }
    else if(z%y!=0&&z%x!=0)
    {
        cout<<"NONE\n";
    }

  }
  return 0;
}