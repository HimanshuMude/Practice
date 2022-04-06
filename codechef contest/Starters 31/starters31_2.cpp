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
    int n;
    cin>>n;
    int s[n],d[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>d[i];
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]==d[i])
        {
            count++;
        }
    }

    cout<<count<<"\n";

    
  }
  return 0;
}