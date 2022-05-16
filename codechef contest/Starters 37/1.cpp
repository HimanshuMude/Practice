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
    int x,h;
    cin>>x>>h;
    if(x>=h)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

  }
  return 0;
}