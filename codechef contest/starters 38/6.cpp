#include<bits/stdc++.h>
#define himanshu main
#define ll long long int
/*----------------Upsolved--------------------*/                      
using namespace std;
void solve()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> v(n);
    for(ll &a:v)
    {
        cin>>a;
    }
    ll maxm=*max_element(v.begin(),v.end());
    ll minm=*min_element(v.begin(),v.end());

    if(x>maxm||x<minm)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
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