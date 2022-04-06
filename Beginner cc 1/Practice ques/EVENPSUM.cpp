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
    ll a,b;
    cin>>a>>b;
    ll odda,oddb,evena,evenb;
    odda=a/2;
    evena=a-odda;
    oddb=b/2;
    evenb=b-oddb;
    ll ans=(odda*oddb)+(evena*evenb);
    cout<<ans<<endl;          
}
    return 0;
}