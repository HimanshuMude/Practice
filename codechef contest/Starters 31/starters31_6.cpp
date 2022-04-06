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
    ll i=0;
    while(1)
    {
        if(n<(1<<i))
        {
            break;
        }
        else{
            i++;
        }
    }

    cout<<n-i<<"\n";

  }
  return 0;
}