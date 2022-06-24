#include<bits/stdc++.h>
#define himanshu main
#define ll long long int
                      
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll cnt=0;
    for (ll i = 0; i < n; i++)
    {
        if(s[i]=='c'||s[i]=='g'||s[i]=='l'||s[i]=='r')
        {
            cnt++;
        }
    }
    if(cnt==0)
    {
        cout<<"1\n";
        return;
    }
    ll ans=(cnt*2)%1000000007LL;
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