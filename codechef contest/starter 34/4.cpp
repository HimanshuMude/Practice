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
    ll n;
    cin>>n;
    ll a[n];
    ll pos=0;
    ll neg=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]>0)  pos++;
        else if(a[i]<0) neg++;
    }
    
    ll ans=((pos*(pos-1))/2)+((neg*(neg-1))/2);
    
    cout<<ans<<"\n";
    
  }
  return 0;
}// 1 2 3 4 5--1 2 , 1 3, 1 4, 1 5,2 3,2 4,2 5,3 4,3 5, 4 5