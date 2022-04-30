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
    int x;
    cin>>x;
    if(0.1*x>100)
    {
        cout<<0.1*x<<"\n";
    }
    else
    {
        cout<<"100\n";
    }
  }
  return 0;
}