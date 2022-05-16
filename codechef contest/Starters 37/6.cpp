#include<bits/stdc++.h>
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
    int n;
    cin>>n;
    vector<int>v;
    int n0=0,n1=0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        if(x==1)  n1++;
        else n0++;
    }
    if(n1>=n0)
    {
        cout<<"1\n";
    }
    else
    {
        cout<<"0\n";
    }

    
  }
  return 0;
}