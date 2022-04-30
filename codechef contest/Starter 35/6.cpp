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
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll x;
    cin>>x;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        a[i]=arr[i]^x;
    }
    ll freq[n]={0};
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if(freq[i]>=2)
        {
            ans+=freq[i]*freq[i];
        }
    }

    cout<<ans<<"\n";

    
  }
  return 0;
}