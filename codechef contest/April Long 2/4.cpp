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
    ll a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for (int i = 0; i < n; i++)
    {
        if(a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
            break;
        }
    }
    bool sach=true;
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=b[i])
        {
            sach=false;
            break;
        }
    }
    if(sach)
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