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
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int rem=0;
    int day=0;
    for (int  i = 0; i < n; i++)
    {
        if((a[i]+rem)-k>=0)
        {
            rem=(a[i]+rem)-k;
        }
        else{
            day=i+1;
        }
    }
    
    if(day==0)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO "<<day<<"\n";
    }
  }
  return 0;
}