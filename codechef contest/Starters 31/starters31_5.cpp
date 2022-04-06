#include<iostream>
#include<cmath>
#define himanshu main
#define ll long long int
                      
using namespace std;
int himanshu()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    ll ans=pow(-1,n)*((n/2)+n%2);
    cout<<ans<<"\n";
    
    
  }
  return 0;
}