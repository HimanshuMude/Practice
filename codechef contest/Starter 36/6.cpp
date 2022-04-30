#include<bits/stdc++.h>
#define himanshu main
#define ll long long int
                      
using namespace std;

long double log_a_to_base_b(int a, int b)
{
    return (long double)(log2(a) / log2(b));
}

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
    double a=sqrt(n);
    
    if((n+1)%2==0||a==floor(a))  cout<<"1\n";
    else if(n==1) cout<<"0\n";
    else  cout<<"-1\n";
    
    
  }
  return 0;
}