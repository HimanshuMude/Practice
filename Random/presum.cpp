#include<bits/stdc++.h>
#define himanshu main
#define ll long long int
                      
using namespace std;
void solve()
{
 ll n;
 cin>>n;
 vector<ll>v;
 ll sum=0;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
        sum+=x;
    }

    vector<ll> ps(n+1,0);
    vector<ll> ss(n+2,0);
    for (ll i = 1; i <= n; i++)
    {
        ps[i]=ps[i-1]+v[i];
        
    }
    for(ll i=n;i>=1;i--)
    {
        ss[i]=ss[i-1]+v[i];
    }
    ll minm=-1;
    for (ll i = 1; i <=n; i++)
    {
        minm=min(minm,ps[i]+ss[i]);
    }

    ll minidx=-1;

    for (ll i = 1; i <=n; i++)
    {
        if(ps[i]+ss[i]==minm)
        {
            minidx=min(minidx,i);
        }
    }
    
    cout<<minidx<<endl;
    
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