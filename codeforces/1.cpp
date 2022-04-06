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
    ll a,b;
    cin>>a>>b;
     if(a==0)
     {
         cout<<"1 \n";
     }
     else if(b==0)
     {
         cout<<a+1<<"\n";
     }
     else
     {
         cout<<a+(2*b)+1<<"\n";
     }
    
   
  }
  return 0;
}