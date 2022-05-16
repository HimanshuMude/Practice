#include<bits/stdc++.h>
#define himanshu main
#define ll long long int
                      
using namespace std;
void solve()
{
    ll w,x,y,z;
    cin>>w>>x>>y>>z;
    if(x==((y*z)+w))  cout<<"filled\n";
    else if(x>((y*z)+w))  cout<<"overflow\n";
    else  cout<<"unfilled\n";
 
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