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
    double x,y;
    cin>>x>>y;
    double xt=1.07*(double)x;
   
    if(y<=xt)
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