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
    ll n,r;
    cin>>n>>r;
    ll a[n],b[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    ll ans[n]={0};
    for (int i = 0; i < n; i++)
    {
        int t=r;
        while(t>0)
        {
            ans[i]++;
            t-=(a[i]-b[i]);

        }
    }
    ll res=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        res=min(res,ans[i]);
    }
    
    
    cout<<res<<endl;
    
  }
  return 0;
}   