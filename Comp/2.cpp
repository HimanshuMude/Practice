#include<bits/stdc++.h>
#define himanshu main
#define ll long long int
                      
using namespace std;
void solve()
{
 ll n,k;
 cin>>n>>k;
 if(k==1)
 {
   if(n%2==0)  cout<<"EVEN\n";
   else  cout<<"ODD\n";
 }
 else if(k==2)
 {
   cout<<"ODD\n";
 }
 else
 {
   cout<<"EVEN\n";
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