#include<bits/stdc++.h>
#define himanshu main
#define ll long long int
                      
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    ll count1=0;
    ll count2=0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s=="START38")
        {
            count1++;
        }
        else if(s=="LTIME108")
         count2++;
    }
    cout<<count1<<" "<<count2<<endl;
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