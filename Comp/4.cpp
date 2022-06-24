#include<bits/stdc++.h>
#define himanshu main
#define ll long long int
                      
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    ll count=n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int k=a[0];
    for (int i = 1; i < n; i++)
    {
        if(k==a[i])
        {
            count--;
        }
        else 
        {
            k=a[i];
        }
    }
    
    cout<<count<<endl;
    
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