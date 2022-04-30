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
    int x,y;
    cin>>x>>y;
    if(3*x<2*y)
    {
        cout<<3*x<<"\n";
    }
    else
    {
        cout<<2*y<<"\n";
    }
  }
  return 0;
}