#include<bits/stdc++.h>
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
    ll n,x;
    cin>>n>>x;
    ll arr[n];
    ll rem=0,n1=n;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
       
    }
    sort(arr,arr+n);
    ll count=0;
    ll ans=0;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]<n1)
        {
            rem+=n1-arr[i];
            count++;
            n1=arr[i];
            ans++;
        }
        ans++;
    }

    cout<<ans<<endl;
    

    


  }
  return 0;
}