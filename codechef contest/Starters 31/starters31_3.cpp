#include<iostream>
#include<cmath>
#define himanshu main
#define ll long long int
                      
using namespace std;
int himanshu()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll t;
  cin>>t;
  while(t--)
  {
    int n,x;
    cin>>n>>x;
    if(x>n)
    {
        int rd=2*n-x;
        cout<<1+rd<<"\n";
    }
    else{
        int ld=x;
        cout<<2*n-ld+1<<"\n";
    }
  }
  return 0;
}