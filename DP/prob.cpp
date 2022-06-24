#include<bits/stdc++.h>
#define himanshu main
#define ll long long int
                      
using namespace std;
void solve()
{
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    if(b<=a)
    {
        if(b>=n)  cout<<"YES\n";
        else if (min(b,c)>=n) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else
    {
        int count=a;
        if(count>=n) {
            cout<<"YES\n";
            return;
        }
        b=b-count;
        count+=(min(b,c));
        if(count>=n) cout<<"YES\n";
        else cout<<"NO\n";

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