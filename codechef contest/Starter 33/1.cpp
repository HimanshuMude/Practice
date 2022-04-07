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
    if(x>y)
    {
        cout<<"SECOND\n";
    }
    else if (x==y)
    {
        cout<<"ANY\n";
    }
    else
    {
        cout<<"FIRST\n";
    }
  }
  return 0;
}