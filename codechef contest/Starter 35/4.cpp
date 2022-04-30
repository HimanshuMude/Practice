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
    ll n,k;
    cin>>n>>k;
    if(k==0&&n%4==0)
    {
        cout<<"Off\n";
    }
    else if(k==0&&n%4!=0)
    {
        cout<<"On\n";
    }
    else if(k==1&&n==0)
    {
        cout<<"On\n";
    }
    else if(k==1&&n%4!=0)
    {
        cout<<"Ambiguous\n";
    }
    else 
    {
        cout<<"On\n";
    }
  }
  return 0;
}