#include<bits/stdc++.h>
#define himanshu main
#define ll long long int
                      
using namespace std;
void solve()
{
    int na,nb,nc;
    cin>>na>>nb>>nc;
    int maxm=max(max(na,nb),max(nb,nc));
    if(maxm>(na+nb+nc-maxm))
    {
        cout<<"YES\n";
    }
    else  cout<<"NO\n";
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