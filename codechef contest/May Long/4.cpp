#include <bits/stdc++.h>
#define himanshu main
#define ll long long int

using namespace std;
int changeIndex(int n,int index){
  if(index>n/2){
    return (n+1)-index;
  }
  else{
    return index;
  }
}
int himanshu()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll t;
  cin >> t;
  while (t--)
  {
    ll n, x, y;
    cin >> n >> x >> y;
    ll x1=changeIndex(n,x);
    ll y1=changeIndex(n,y);

    ll count=3*(n-1)+2*(min(x1,y1)-1);
    if(n==2){
      count=3;
    }
    cout<<count<<endl;
    
  }
  return 0;
}