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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(c>=a&&d>=b)
    {
        cout<<"POSSIBLE\n";
    }
    else  cout<<"IMPOSSIBLE\n";
  }
  return 0;
}