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
    ll n,m,x;
    cin>>n>>m>>x;
    if(m==x)
    {
        cout<<"0\n";
    }
    else
     cout<<(x*n)/(x+1)<<endl;
  }
  return 0;
}