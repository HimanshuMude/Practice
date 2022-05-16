#include<bits/stdc++.h>
#define himanshu main
#define ll long long int
 /*---------------------Upsolved----------------------*/                     
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(ll &x:a)
    {
      cin>>x;
    }
    for(ll &x:b)
    {
      cin>>x;
    }

    map<pair<ll,ll>,ll>m;
    ll ans=0;
    for (int i = 0; i < n; i++)
    {
      ans+=m[{a[i],b[i]}];
      m[{b[i],a[i]}]++;
    }
    
    

   cout<<ans<<endl;
    

  
    
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