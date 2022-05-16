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
    int n,x;
    cin>>n>>x;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>v2=v;
    int t1=0;
    for (int i = 0; i < n;i++)
    {
        while(v[i]>0)
        {
            v[i]-=x;
            t1++;
        }
    }

    sort(v2.begin(),v2.end());
    int t2=v2[n-1];

    cout<<min(t1,t2)<<endl;
    
    
  }
  return 0;
}