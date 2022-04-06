#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#define himanshu main
#define ll long long int
                      
using namespace std;
int himanshu()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll n,k,v;
    cin>>n>>k>>v;
    ll a[n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]; 
        sum+=a[i];
    }
    ll sumdel=(v*(n+k))-sum;
    if(sumdel%k==0 && sumdel>0)
    {
        cout<<sumdel/k<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }

  }
    return 0;
}