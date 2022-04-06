#include<iostream>
#include<cmath>
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
    ll n,m;
    cin>>n>>m;
    if(n<=m)
    {
        cout<<n<<"\n";
    }
    else
    {
        cout<<(2*n-m)<<"\n";
    }
  }
  return 0;
}