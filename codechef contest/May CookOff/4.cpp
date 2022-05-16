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
    if(n==1)
    {
        cout<<n<<endl;
    }
    else if(n>=2&&n<4)
    {
        cout<<n-1<<endl;
    }
    else
    {
        cout<<n<<endl;
    }
  }
  return 0;
}