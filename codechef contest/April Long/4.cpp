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
    if(a%2==0&&b-a>=2)
    {
      cout<<a<<" "<<a+2<<"\n";
    }
    else if(a%2!=0&&b-a>=3)
    {
      if(__gcd(a,a+3)>1&&__gcd(a+1,a+3)>1)
      {
        cout<<a<<" "<<a+3<<"\n";
      }
      else
      {
        cout<<a+1<<" "<<a+3<<"\n";
      }
    }
    else
    {
      cout<<"-1\n";
    }


    
  }
  return 0;
}