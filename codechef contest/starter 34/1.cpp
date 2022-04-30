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
    int n,m,k;
    cin>>n>>m>>k;
    if(k*m>=n)
    {
        cout<<"Yes\n";
    }
    else cout<<"No\n";
  }
  return 0;
}