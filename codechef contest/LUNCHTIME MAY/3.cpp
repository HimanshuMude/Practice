#include<bits/stdc++.h>
#define himanshu main
#define ll long long int
                      
using namespace std;
void solve()
{
 ll n;
 cin>>n;
    
    ll cnt=0;
   for (int i = 0; i < n; i++)
   {
       ll x;
       cin>>x;
       if(x>=1000)
       {
           cnt++;
       }
   }

   cout<<cnt<<"\n";


   
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