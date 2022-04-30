#include <bits/stdc++.h>
#define himanshu main
#define ll long long int

using namespace std;
int himanshu()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    ll a[n];
    ll c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] == 1)
        c1++;
      else
        c2++;
    }
    if(abs(c2-c1)>2)
    {
      cout<<"No\n";
    }
    else
    {
      if(c2%2==0 &&c1%2==0)
      {
        cout<<"Yes\n";
      } 
      else if(c1==c2&&c1%2!=0&&c2%2!=0)
      {
        cout<<"Yes\n";
      }
      else if(c1%2!=0&&c2%2!=0)
      {
        cout<<"No\n";
      }
      else if(c1%2!=0&&c2%2==0&&abs(c2-c1)==1)
      {
        cout<<"Yes\n";
      }
      else if(c1%2==0&&c2%2!=0&&abs(c2-c1)==1)
      {
        cout<<"Yes\n";
      }
      else
      {
        cout<<"No\n";
      }
    }
    
  }
  return 0;
}
