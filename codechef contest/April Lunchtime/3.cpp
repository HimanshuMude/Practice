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
    int x,y,z;
    cin>>x>>y>>z;
    int temp=y/x;
    if(temp<=z)
    {
        cout<<z-temp<<"\n";
    }
    else
    {
        cout<<"0\n";
    }
  }
  return 0;
}