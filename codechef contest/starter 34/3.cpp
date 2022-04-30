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
    int n,x,sum=0;
    cin>>n>>x;
    for(int i=0;i<n-1;i++)
    {
        int p;
        cin>>p;
        sum+=p;
    }
    if(sum/n>=x)
    {
        cout<<"0\n";
    }
    else
    {
        cout<<(x*n)-sum<<"\n";
    }
  }
  return 0;
}