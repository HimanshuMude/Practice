#include<iostream>
#include<cmath>
#include<string>
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
    ll n,x,y;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    int c0=0,c1=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='0')
        {
            c0++;
        }
        else
        {
            c1++;
        }
    }

    if(c0==0||c1==0)
    {
        cout<<"0\n";
    }
    else
    {
        if(x>y)
        {
            cout<<y<<"\n";
        }
        else
        {
            cout<<x<<"\n";
        }
    }
    
    
  }
  return 0;
}