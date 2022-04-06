#include<iostream>
#include<cmath>
#include<algorithm>
#define himanshu main
#define ll long long int
                      
using namespace std;
int himanshu()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
 
  // cin>>t;
  
    ll n=5,k=4;
    // cin>>n>>k;
    ll a[n]={5,4,3,2,1};
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
  //   sort(a,a+n);
  //   if(k>n-1)
  //   {
  //       cout<<a[n-1]<<"\n";
  //   }
  //   else
  //   {
  //       cout<<a[k]<<"\n";
  //   }
    
  // }
  int sum=0;
    for (int i = 0; i < n; i++)
    { 
      sum+=a[i];
    }
    
  
  return 0;
}