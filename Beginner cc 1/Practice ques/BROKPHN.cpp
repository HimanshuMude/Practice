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
    ll n;
    cin>>n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll count=n;
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]==a[i+1])
        {
            count--;
        }
    }
    cout<<count<<endl;
    
                 
  }
   return 0;
}