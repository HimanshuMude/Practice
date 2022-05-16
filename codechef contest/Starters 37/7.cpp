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
    int n;
    cin>>n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    bool b=1;
    for(int i=0;i<n-1;i+=2)
    {
        if(a[i+1]-a[i]>1)
        {
            b=0;
            break;
        }
    }
    if(b)
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