#include<bits/stdc++.h>
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
    ll n;
    cin>>n;
    if(n%2==0)
    {
        cout<<(n/2)*3<<endl;
    }
    else
    {
        cout<<((n-1)/2)*3<<endl;
    }
  }
  return 0;
}