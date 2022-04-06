#include<iostream>
#include<cmath>
#define himanshu main
#define ll long long int
#define haa ios_base::sync_with_stdio(false);
#define bhai cin.tie(NULL);cout.tie(NULL);
                      
using namespace std;
int himanshu()
{
  haa bhai
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

    for (int i = 0; i < n; i++)
    {
        if(k-a[i]>=0)
        {
            cout<<"1";
            k=k-a[i];
        }
        else
        {
            cout<<"0";
        }
    }
    cout<<"\n";

    
  }
  return 0;
}