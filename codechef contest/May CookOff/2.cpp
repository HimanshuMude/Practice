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
    int x,y;
    cin>>x>>y;
    if(100*x<10*y)
    {
        cout<<"Disposable\n";
    }
    else if(100*x>=10*y)
    {
        cout<<"Cloth\n";
    }
  }
  return 0;
}