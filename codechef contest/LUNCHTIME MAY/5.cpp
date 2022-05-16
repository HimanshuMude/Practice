#include<bits/stdc++.h>
#define himanshu main
#define ll long long int
                      
using namespace std;

void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> v;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    v.erase(unique(v.begin(),v.end()),v.end());
    sort(v.begin(),v.end());
    ll p=v.size();
    ll ans=-9;
    ll ans2=-1;
    ll res=-1;
    for (ll i = 0; i < n; i++)
    {
      ans=v[p-1]+v[i]+(v[p-1]-v[i])%m;
      if(v[p-1]!=v[i])
      {
        ans2=v[p-1]+v[i]+(m-(v[p-1]-v[i])%m);
      }
      res=max(ans,ans2);
    }
    cout<<res<<"\n";

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