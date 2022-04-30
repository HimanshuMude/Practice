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
    int n,x;
    cin>>n>>x;
    if(x%n==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
  }
  return 0;
}