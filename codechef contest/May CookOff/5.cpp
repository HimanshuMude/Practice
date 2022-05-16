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
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    bool b=1;
    for (int i = 1; i < n-1; i++)
    {
        ll temp=a[i]-a[i-1];
        ll temp1=a[i+1]-a[i];
        if(temp==0||temp1==0)
        {
            continue;
        }
        if(temp1/temp==2||temp/temp1==2)
        {
            continue;
        }
        else
        {
            b=0;
            break;
        }
        
        
    }

    if(b)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
    
    
  }
  return 0;
}