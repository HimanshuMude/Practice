#include<bits/stdc++.h>
#define himanshu main
#define ll long long int
                      
using namespace std;
void solve()
{
    ll a,b,m;
    cin>>a>>b>>m;
    ll p=abs(b-a);
    ll q=m-p;
    cout<<min(p,q)<<"\n";
}
int himanshu()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}