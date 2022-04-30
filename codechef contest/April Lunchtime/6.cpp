#include<iostream>
#include<cmath>
#include<vector>
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
    ll n,m,l;
    cin>>n>>m>>l;
    vector <ll > v;
    ll i=0;
    while(i<n)
    {
        ll a=l+i;
        i++;
        v.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        v[i]=(m/v[i]*v[i]);
        m-=v[i];
    }
    cout<<m<<endl;

 

    
  }
  return 0;
}