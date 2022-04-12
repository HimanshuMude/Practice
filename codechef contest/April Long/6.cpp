#include<iostream>
#include<cmath>
#include<algorithm>
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
    ll a,b;
    cin>>a>>b;
    if(a==1 ||b==1)
    {
        cout<<"-1\n";
    }
    else 
    {
        if(__gcd(a,b)>1)
        {
            cout<<"0\n";
        }
        else
        {
            cout<<"1\n";
        }
    }

  }
  return 0;
}