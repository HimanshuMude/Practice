#include<bits/stdc++.h>
#define himanshu main
#define ll long long int
                      
using namespace std;

ll msb(int n)
{
    if(n==0)
    return 0;
    
    ll b=1;
    while(n>>b) b++;
    
    return b;
}
/*----------------Upsolved------------------------*/


void solve()
{
    ll n;
    cin>>n;
    vector<ll> v;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }

    vector<vector<ll>> pc(n+1,vector<ll>(32,0));

    for (ll i = 0; i < n; i++)
    {
      ll b;
      if(v[i]==0)
      {
        b=0;
      }
      else b=msb(v[i]);
      for (ll j = 0; j < 32; j++)
      {
        pc[i+1][j]=pc[i][j]+(b==j);
      }
      
    }
    
    ll q;
    cin>>q;
    while(q--)
    {
      ll l,r,x;
      cin>>l>>r>>x;
      ll pos=msb(x);
      ll ans=r-l+1-(pc[r][pos]-pc[l-1][pos]);
      cout<<ans<<endl;
      
    }
    
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


