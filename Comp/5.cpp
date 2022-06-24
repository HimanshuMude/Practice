#include<bits/stdc++.h>
#define himanshu main
#define ll long long int
                      
using namespace std;
void solve()
{
    ll x,y;
    cin>>x>>y;
    ll ans1=1500-(2*x+4*(x+y));
    ll ans2=1500-(4*y+2*(x+y));
    cout<<max(ans1,ans2)<<endl;
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