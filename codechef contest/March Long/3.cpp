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
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    int win=2;
    if(x==a||x==b)
    {
        win--;
    }
    if(y==a||y==b)
    {
        win--;
    }
    cout<<win<<"\n";
  }
  return 0;
}