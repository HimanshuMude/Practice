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
    int n,p,x,y;
    cin>>n>>p>>x>>y;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];  
    }
    int time=0;

    for (int i = 0; i < p; i++)
    {
        if(a[i]==1)
        {
            time+=y;
        }
        else 
        {
            time+=x;
        }
    }
    cout<<time<<"\n";
    
    
  }
  return 0;
}